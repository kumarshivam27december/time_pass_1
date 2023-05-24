#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 10
#define MAX_TEAM_NAME_LENGTH 30
#define MAX_MATCHES 100
#define FILE_NAME "teams.txt"

void addTeam(int *numTeams, char teams[MAX_TEAMS][MAX_TEAM_NAME_LENGTH]) {
    if (*numTeams >= MAX_TEAMS) {
        printf("Maximum number of teams reached. Cannot add more teams.\n");
        return;
    }

    char teamName[MAX_TEAM_NAME_LENGTH];
    printf("Enter team name: ");
    scanf("%s", teamName);
    strcpy(teams[*numTeams], teamName);
    (*numTeams)++;
    printf("Team '%s' added successfully.\n", teamName);
}

void deleteTeam(int *numTeams, char teams[MAX_TEAMS][MAX_TEAM_NAME_LENGTH]) {
    if (*numTeams <= 0) {
        printf("No teams available to delete.\n");
        return;
    }

    char teamName[MAX_TEAM_NAME_LENGTH];
    printf("Enter team name to delete: ");
    scanf("%s", teamName);

    int found = 0;
    for (int i = 0; i < *numTeams; i++) {
        if (strcmp(teams[i], teamName) == 0) {
            found = 1;
            for (int j = i; j < *numTeams - 1; j++) {
                strcpy(teams[j], teams[j + 1]);
            }
            (*numTeams)--;
            printf("Team '%s' deleted successfully.\n", teamName);
            break;
        }
    }

    if (!found) {
        printf("Team '%s' not found.\n", teamName);
    }
}

void generateMatches(int numTeams, char teams[MAX_TEAMS][MAX_TEAM_NAME_LENGTH], int numMatches) {
    if (numTeams < 2) {
        printf("Insufficient number of teams to generate matches.\n");
    } else if (numMatches <= 0) {
        printf("Number of matches should be greater than zero.\n");
    } else {
        printf("Generating %d matches...\n", numMatches);

        // Logic for generating matches (not implemented in this example)
        // You can implement your own logic here based on your requirements

        printf("%d matches generated successfully.\n", numMatches);
    }
}

void saveTeamsToFile(int numTeams, char teams[MAX_TEAMS][MAX_TEAM_NAME_LENGTH]) {
    FILE *fp = fopen(FILE_NAME, "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(fp, "%d\n", numTeams);
    for (int i = 0; i < numTeams; i++) {
        fprintf(fp, "%s\n", teams[i]);
    }

    fclose(fp);
    printf("Team information saved to file '%s' successfully.\n", FILE_NAME);
}

void loadTeamsFromFile(int *numTeams, char teams[MAX_TEAMS][MAX_TEAM_NAME_LENGTH]) {
    FILE *fp = fopen(FILE_NAME, "r");
    if (fp == NULL) {
        printf("Error opening file for reading. Starting with empty team list.\n");
        return;
    }

    fscanf(fp, "%d\n", numTeams);
    for (int i = 0; i < *numTeams; i++) {
        fscanf(fp, "%s\n", teams[i]);
    }

    fclose(fp);
    printf("Team information loaded from file '%s' successfully.\n", FILE_NAME);
}

int main() {
    int num;
    int numTeams = 0;
    char teams[MAX_TEAMS][MAX_TEAM_NAME_LENGTH];

    int choice, numMatches;
    do {
        printf("\nIPL Cricket Tournament Scheduler\n");
        printf("1. Add Team\n");
        printf("2. Delete Team\n");
        printf("3. Generate Matches\n");
        printf("4. Save Teams to File\n");
        printf("5. Load Teams from File\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTeam(&numTeams, teams);
                break;
            case 2:
                deleteTeam(&numTeams, teams);
                break;
            case 3:
                printf("Enter number of matches to generate: ");
                scanf("%d", &numMatches);
                generateMatches(numTeams, teams, numMatches);
                break;
            case 4:
                saveTeamsToFile(numTeams, teams);
                break;
            case 5:
                loadTeamsFromFile(&numTeams, teams);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 6);

    return 0;
}
