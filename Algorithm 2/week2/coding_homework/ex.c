#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int knightLife = 20;			// The knight lives
int monsterLife = 20;			// The monster lives
int turn = 1;					// The round index
int knightEffect = 0;  // the amount off damage that you about to deal or heal(the damage is randomed by attack())
int monsterEffect = 0;  // the amount off damage that you about to take(the damage is randomed by monsterAttack())
char knightAction; // what your knight about to do 
int Round; // for the specialAttack

// Your functions…

// return a random number between min and max
int getRandomInRange(int min, int max) {
    return min + rand() % (max - min + 1);		
}
    //your normmal attack
int attack(){
    knightEffect = getRandomInRange(5, 12);
    monsterLife -= knightEffect;
}

    //your heal 
int heal(){
    knightEffect = getRandomInRange(8, 12);
    knightLife += knightEffect;
}

    //your special attack
int specialAttack(){
    knightEffect = getRandomInRange(8, 25);
    monsterLife -= knightEffect;
}

    //monster attack
int monsterAttack(){
    monsterEffect =  getRandomInRange(8, 12);
    knightLife -= monsterEffect;
}

    // print status(your hp and the monster hp)
void printStatus(){
    if(monsterLife > 0 && knightLife > 0){
        printf("Knight HP : %d\n", knightLife);
        printf("Monster HP : %d\n", monsterLife);
    }
}
    

    // print what happened during each round
void printRoundLog(){
    if(knightAction == 'H'){
        printf("You revoered %d HP.\n", knightEffect);
    }else if (knightAction == 'A' || knightAction == 'S'){
        printf("You attack the monster and dealt %d damages.\n", knightEffect);
    }
    printf("The monster attacked and dealt %d damage.\n", monsterEffect);
    printf("----------------------------------------------\n");
}

// The main
int main() {

    srand(time(NULL));              // Seed random number generator

    while (knightLife > 0 && monsterLife > 0) { 

	    // Your main code 	
        printf("\n----- Round %d -----\n", turn);
        turn += 1;
        if(turn % 3 == 0){
            Round += 1;
        }
        printf("Choose your action : (A)ttack, (H)eal, (S)peacialAttack\n");
        scanf(" %c", &knightAction);
        if ( knightAction == 'A'){
            attack();
        }else if( knightAction == 'H'){
            heal();
        }else if ( knightAction == 'S'){
            if ( Round > 0){
                specialAttack();
                Round -= 1;
            }else {        
                printf("SpecialAttack is only allowed after 3 rounds\n");
                continue;
            }
        } else {
            printf("Invalid input! Input again!");
            continue;
        }

        monsterAttack();
        printStatus();
        printRoundLog();
    } 
    if(knightLife <= 0 && monsterLife <= 0){
        printf("Knight HP : 0\nMonster HP : 0\nIt's a draw!!!\n");
    }else if  (knightLife > monsterLife){
        printf("Victory!!!You win!!!\n");
    }else if (monsterLife > knightLife) {
        printf("Defeated!!!You lost!!!\n");
    }

    return 0;
}
