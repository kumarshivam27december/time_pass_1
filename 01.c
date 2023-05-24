#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 10
#define MAX_MATCHES 45
#define FILE_NAME "teams.txt"

void generateMatches(int numTeams, char teams[MAX_TEAMS][30], int numMatches) {
    int matchCount = 1;
    printf("\n=======================\n");
    printf("    IPL Schedule\n");
    printf("=======================\n");

    for (int i = 0; i < numTeams; i++) {
        for (int j = i + 1; j < numTeams; j++) {
            if (matchCount > numMatches) {
                break;
            }
            printf("Match %d: %s vs %s\n", matchCount, teams[i], teams[j]);
            matchCount++;
        }
    }
}

void deleteTeam(int *numTeams, char teams[MAX_TEAMS][30]) {
    int teamIndex;
    char teamName[30];
    printf("Enter the name of the team to be deleted: ");
    scanf("%s", teamName);

    for (int i = 0; i < *numTeams; i++) {
        if (strcmp(teams[i], teamName) == 0) {
            teamIndex = i;
            for (int j = teamIndex; j < *numTeams - 1; j++) {
                strcpy(teams[j], teams[j + 1]);
            }
            (*numTeams)--;
            printf("Team '%s' has been deleted from the schedule.\n", teamName);
            return;
        }
    }
    printf("Team '%s' not found in the schedule.\n", teamName);
}

void insertTeam(int *numTeams, char teams[MAX_TEAMS][30]) {
    if (*numTeams == MAX_TEAMS) {
        printf("Maximum number of teams reached. No more teams can be added.\n");
        return;
    }

    char teamName[30];
    printf("Enter the name of the team to be inserted: ");
    scanf("%s", teamName);

    strcpy(teams[*numTeams], teamName);
    (*numTeams)++;
    printf("Team '%s' has been added to the schedule.\n", teamName);
}

void saveTeamsToFile(int numTeams, char teams[MAX_TEAMS][30]) {
    FILE *file = fopen(FILE_NAME, "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(file, "%d\n", numTeams);
    for (int i = 0; i < numTeams; i++) {
        fprintf(file, "%s\n", teams[i]);
    }

    fclose(file);
    printf("Team information saved to file '%s'.\n", FILE_NAME);
}

int loadTeamsFromFile(int *numTeams, char teams[MAX_TEAMS][30]) {
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        printf("Error opening file for reading. Using default team information.\n");
        return 0;
    }

    fscanf(file, "%d", numTeams);
    for (int i = 0; i < *numTeams; i++) {
        fscanf(file, "%s", teams[i]);
    }

    fclose(file);
    printf("Team information loaded from file '%s'.\n", FILE_NAME);
    return 1;
}

int main() {
    // int loadTeamsFromFile(int *numTeams, char teams[MAX_TEAMS][30]);

    int numTeams, numMatches;
    char teams[MAX_TEAMS][30];

    if (loadTeamsFromFile(&numTeams, teams)) {
printf("Number of teams: %d\n", numTeams);
printf("Enter the number of matches to generate: ");
scanf("%d", &numMatches);
generateMatches(numTeams, teams, numMatches);
} else {
printf("Enter the number of teams: ");
scanf("%d", &numTeams);
    for (int i = 0; i < numTeams; i++) {
        printf("Enter the name of team %d: ", i + 1);
        scanf("%s", teams[i]);
    }

    saveTeamsToFile(numTeams, teams);
    printf("Team information saved to file '%s'.\n", FILE_NAME);
}

int choice;
while (1) {
    printf("\nMenu:\n");
    printf("1. Insert a team\n");
    printf("2. Delete a team\n");
    printf("3. Generate matches\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            insertTeam(&numTeams, teams);
            break;
        case 2:
            deleteTeam(&numTeams, teams);
            break;
        case 3:
            printf("Enter the number of matches to generate: ");
            scanf("%d", &numMatches);
            generateMatches(numTeams, teams, numMatches);
            break;
        case 4:
            saveTeamsToFile(numTeams, teams);
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
    }
}

return 0;

}
