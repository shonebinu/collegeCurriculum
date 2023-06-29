#include <stdio.h>

struct Player {
    char name[50];
    char country[50];
    int inningsPlayed;
    int totalRuns;
    int notOuts;
    float battingAverage;
};

int main() {
    int numPlayers;
    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);

    struct Player players[numPlayers];

    for (int i = 0; i < numPlayers; i++) {
        printf("\nPlayer %d: \n",i + 1);
        printf("Name: ");
        scanf("%s", players[i].name);
        printf("Country: ");
        scanf("%s", players[i].country);
        printf("Innings Played: ");
        scanf("%d", &players[i].inningsPlayed);
        printf("Total Runs: ");
        scanf("%d", &players[i].totalRuns);
        printf("Not Outs: ");
        scanf("%d", &players[i].notOuts);

        players[i].battingAverage = (float)players[i].totalRuns / (players[i].inningsPlayed - players[i].notOuts);
    }

    printf("\nPlayer\t\tCountry\t\tBatting Average\n");
    printf("-----------------------------------------------\n");

    for (int i = 0; i < numPlayers; i++) {
        printf("%s\t\t%s\t\t%.2f\n", players[i].name, players[i].country, players[i].battingAverage);
    }

    return 0;
}