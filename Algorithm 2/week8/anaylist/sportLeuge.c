#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PLAYER 20
#define MAX_TEAM 11

    // all the struct that i need

typedef struct {
    int number;
    char playerName[50];
    char position[10];
} Player;

typedef struct {
    char teamName[50];
    char coachName[50];
    int amountP;
    Player player[MAX_PLAYER];
} Team;

typedef struct {
    char leagueName[50];
    int amountT;
    Team team[MAX_TEAM];
} League;

    // all the function that i need help in the main
    
void trimNewLine(char* string) {    // trim new line after user press enter in the input

    string[strcspn(string, "\n")] = '\0';

}

int checkInput(int temp, int limit) {      // check if the input of choice is in the rage

    if(temp > limit || temp < 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    return 0;

}

    // all the functions for the makes changes function

void removePlayer(Team* team, char playerRemove[50]) {      // remove player

    int last = team->amountP - 1;
    for(int i =0; i < team->amountP; i++) {

        if(strcmp(team->player[i].playerName, playerRemove) == 0) {
            for(int j = i; j < team->amountP - 1; j++){
                team->player[j] = team->player[j+1];
            }
            team->amountP-- ;
            printf("Remove player successfully!\n");
            return;
        }

    }

    printf("There's no player name : %s\n", playerRemove);

}

void addPlayer(Team* team) {        // add player

    int spot = team->amountP;

    printf("Enter the player's name : ");
    fgets(team->player[spot].playerName, sizeof(team->player[spot].playerName), stdin);
    trimNewLine(team->player[spot].playerName);

    printf("Enter player's number : ");
    scanf(" %d", &team->player[spot].number);
    getchar();

    printf("Enter player's position : ");
    fgets(team->player[spot].position, sizeof(team->player[spot].position), stdin);
    trimNewLine(team->player[spot].position);

    team->amountP++ ;

}

void addCoach(Team* team) {     // add coach

    char new[50];

    printf("Enter you new coach name : ");
    fgets(new, sizeof(new), stdin);
    trimNewLine(new);   

    strcpy(team->coachName, new);
    
    printf("Add coach's name successfully!\n");

}

    // all the function for makes league changes 

void teamChangePlace(League* league, char teamToChange[50], int desPlace) {

    int currentPlace = -1;       // find the current place of the team 

    for(int i = 0; i < league->amountT; i++){
        if(strcmp(teamToChange, league->team[i].teamName) == 0) {
            currentPlace = i;
            break;
        }
    }

    if(currentPlace == -1) {
        printf("Can't find team name : %s\n", teamToChange);
        return;
    }

    Team teamTemp = league->team[currentPlace];     // set a copy of a struct that you want to change

    if(currentPlace < desPlace - 1) {

        for(int i = currentPlace; i < desPlace - 1; i++){   // replace the team with the team after it 
            league->team[i] = league->team[i + 1];              // 1. d and 2. s => 1.. and 2. d and 3. s
        }

    }else if(currentPlace > desPlace - 1) {

        for(int i = currentPlace; i > desPlace - 1; i--){    // replace the team with the team that comes before it
            league->team[i] = league->team[i - 1];                  // 2. d and 3. s =>  1. d and 2. s and 3. ..
        }
    }

    league->team[desPlace - 1] = teamTemp;      // set the team at the destination place to the team that we copy
    printf("Change place successfully!\n");

}

void addTeam(League* league) {  //add new team to the league

    int spot = league->amountT;     // spot avaliable for the new team

    printf("Enter the team name that you want to add : ");      // add new team to the free spot
    fgets(league->team[spot].teamName, sizeof(league->team[spot].teamName), stdin);
    trimNewLine(league->team[spot].teamName);

    league->team[spot].amountP = 0;
    league->amountT++ ;     // increment amount of team by 1 because we jsut add 1 more team

    printf("Add team successfully!\n");
}

void removeTeam(League* league, char remove[50]){       // remove the team from the league

    for(int i = 0; i < league->amountT; i++){
        if(strcmp(remove, league->team[i].teamName) == 0) {
            for(int j = i; j < league->amountT - 1; j++){
                league->team[j] = league->team[j+1];
            }
            league->amountT-- ;
            printf("Remove team seccusfully!\n");
            return;
        }
    }

    printf("There's  no player name : %s\n", remove);
}

    // all the menu function

void leagueMenu() {

    printf("---- LEAGUE MENU -----\n");
    printf("1. check title\n");
    printf("2. check team\n");
    printf("3. makes changes to team\n");
    printf("4. makes changes to league\n");
    printf("5. exit\n");
    printf("---------------------\n");

}

void changeTeamMenu() {

    printf("----- MAKES CHANGES TO TEAM MENU -----\n");
    printf("1. change coach\n");
    printf("2. add player\n");
    printf("3. remove player\n");
    printf("--------------------------------------\n");

}

void changeLeagueMenu() {

    printf("----- MAKES CHANGES TO LEAGUE MENU -----\n");
    printf("1. change team place on the title\n");
    printf("2. add team\n");
    printf("3. remove team\n");
    printf("4. change the league title\n");
    printf("----------------------------------------\n");

}

void teamInfo(League league, int check) {      // for check team info 

    printf("----- TEAM INFO -----\n");
    printf("Team name : %s\n", league.team[check-1].teamName);
    printf("Coach name : %s\n", league.team[check-1].coachName);
    printf("Amount of players : %d\n", league.team[check - 1].amountP);
    printf("Player name : \n");

    for(int i = 0; i < league.team[check - 1].amountP; i++) {
        printf("%s (%d) (%s)\n", 
            league.team[check-1].player[i].playerName, 
            league.team[check-1].player[i].number, 
            league.team[check-1].player[i].position
        );
    }

    printf("---------------------\n"); 

}

void leagueTitle(League* league) {       // for print league  title choice

    char upperName[50];
    strcpy(upperName, league->leagueName);
    for(int i = 0; upperName[i]; i++) upperName[i] = toupper(upperName[i]);
    printf("----- %s's TITLE -----\n", upperName);
    for(int i = 0; i < league->amountT; i++){
        printf("%d. %s\n", i + 1, league->team[i].teamName);
    }
    printf("------------------------\n");               

}

int main() {

    League league;

    printf("Enter you League title : ");
    fgets(league.leagueName, sizeof(league.leagueName), stdin);
    trimNewLine(league.leagueName);

    while(1) {

        int teamAmount = 0;

        printf("Enter number of teams (bigger than 1 but less than 12): ");
        scanf(" %d", &teamAmount);
        getchar();

        if(checkInput(teamAmount, MAX_TEAM)) continue;
        
        league.amountT = teamAmount;

        for(int i = 0; i < league.amountT; i++) strcpy(league.team[i].teamName, "\0");

        break;

    }

    int choice = 0;

    while(choice != 5) {

        leagueMenu();

        printf("Enter you choice : ");
        scanf(" %d", &choice);
        getchar();

        if(checkInput(choice, 5)) continue;;

        if(choice == 1){    // check league title race 

            leagueTitle(&league);

        }else if(choice == 2) {     // check team

            int check = 0;

            printf("Enter the team you want to check : ");
            scanf(" %d", &check);
            getchar();

            if(checkInput(check, league.amountT)) continue;;

            teamInfo(league, check);

        }else if(choice == 3) {     // makes changes to team

            int change = 0;

            printf("Enter the team you want to makes changes : ");      // main of this makes change 
            scanf(" %d", &change);
            getchar();

            if(checkInput(change, MAX_TEAM)) continue;

            Team* teamChange = &league.team[change-1];

            int temp = 0;       // choose the changes to team menu
            
            changeTeamMenu();

            printf("Enter you choice : ");
            scanf(" %d", &temp);
            getchar();

            if(checkInput(temp, 3)) continue;;

            if(temp == 1) {     // change/add coach 

                addCoach(teamChange);

            }else if(temp == 2) {       // add player

                if(teamChange->amountP >= MAX_PLAYER) {
                    printf("You can't add more player! (Players limit)");
                    continue;
                }

                addPlayer(teamChange);
                
            }else if(temp == 3){       // remove player

                char remove[50];
                printf("Enter player's name that you want to remove : ");
                fgets(remove, sizeof(remove), stdin);
                trimNewLine(remove);

                removePlayer(teamChange, remove);


            }
            // end of changes function
        
        }else if(choice == 4) {     // makes change to the league

            changeLeagueMenu();

            int temp = 0;

            printf("Enter your choice : ");
            scanf(" %d", &temp);
            getchar();

            if(checkInput(temp, 4)) continue;

            if(temp == 1) {     // make changes to the title

                char teamToChange[50];
                int desPlace = 0;
                leagueTitle(&league);

                printf("Enter the team do you want to change place : ");
                fgets(teamToChange, sizeof(teamToChange), stdin);
                trimNewLine(teamToChange);

                printf("Enter the place you want to swap to : ");
                scanf(" %d", &desPlace);
                getchar();

                teamChangePlace(&league, teamToChange, desPlace);
                
            }else if(temp == 2) {   // add team

                if(league.amountT >= MAX_TEAM) {
                    printf("You can't add more team! (League limit)\n");
                    continue;
                }

                addTeam(&league);

            }else if(temp == 3) {   // remove team

                char remove[50];

                printf("Enter the team's name that you want to remove : \n");
                fgets(remove, sizeof(remove), stdin);
                trimNewLine(remove);

                removeTeam(&league, remove);
            
            }else if(temp == 4) {

                char new[50];
                printf("Enter the new LEAGUE title : ");
                fgets(new, sizeof(new), stdin);
                trimNewLine(new);
                strcpy(league.leagueName, new);
                printf("Change LEAGUE title successfully!\n");
            }

        }

    }

    return 0;
}