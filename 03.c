#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_TEAMS 10
#define MAX_TEAM_NAME_LENGTH 30
#define FILE_NAME "teams.txt"

// Function prototypes
void insertTeam(int *numTeams, char teams[MAX_TEAMS][MAX_TEAM_NAME_LENGTH]);
void deleteTeam(int *numTeams, char teams[MAX_TEAMS][MAX_TEAM_NAME_LENGTH]);
void generateMatches(int numTeams, char teams[MAX_TEAMS][MAX_TEAM_NAME_LENGTH], int numMatches);
void saveTeamsToFile(int numTeams, char teams[MAX_TEAMS][MAX_TEAM_NAME_LENGTH]);
void loadTeamsFromFile(int *numTeams, char teams[MAX_TEAMS][MAX_TEAM_NAME_LENGTH]);

int main() {
    int numTeams = 0;
    char teams[MAX_TEAMS][MAX_TEAM_NAME_LENGTH];
    int numMatches = 0;

    // Load team information from file
    loadTeamsFromFile(&numTeams, teams);

    printf("Number of teams: %d\n", numTeams);
    printf("Enter the number of matches to generate: ");
    scanf("%d", &numMatches);
    generateMatches(numTeams, teams, numMatches);

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

// Function definitions

void insertTeam(int *numTeams, char teams[MAX_TEAMS][MAX_TEAM_NAME_LENGTH]) {
    if (*numTeams == MAX_TEAMS) {
        printf("Maximum number of teams reached. Cannot insert more teams.\n");
    } else {
        printf("Enter the name of the team to insert: ");
        scanf("%s", teams[*numTeams]);
        (*numTeams)++;
        printf("Team '%s' inserted successfully.\n", teams[*numTeams - 1]);
    }
}

void deleteTeam(int *numTeams, char teams[MAX_TEAMS][MAX_TEAM_NAME_LENGTH]) {
    if (*numTeams == 0) {
        printf("No teams to delete.\n");
    } else {
        printf("Enter the name of the team to delete: ");
        char teamName[MAX_TEAM_NAME_LENGTH];
        scanf("%s", teamName);

        bool found = false;
        for (int i = 0; i < *numTeams; i++) {
            if (strcmp(teams[i], teamName) == 0) {
                // Shift teams after the deleted team to fill the gap
                for (int j = i; j < *numTeams - 1; j++) {
                    strcpy(teams[j], teams[j + 1]);
                }
                (*numTeams)--;
                found = true;
            printf("Team '%s' deleted successfully.\n", teamName);
            break;
        }
    }

    if (!found) {
        printf("Team '%s' not found.\n", teamName);
    }
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
    // Logic for generating matches (not implemented in this example)
    // You can implement your own logic here based on your requirements

    printf("%d matches generated successfully.\n", numMatches);
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