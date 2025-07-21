#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Your functions…
    // return a random number between min and max
int getRandomInRange(int min, int max) {
    return min + rand() % (max - min + 1);		
}
    //your normmal attack
int attack(){
    return getRandomInRange(5, 12);
}
    //your heal 
int heal(){
    return getRandomInRange(8, 12);
}
    //your special attack
int specialAttack(){
    return getRandomInRange(8, 25);
}
    //monster attack
int monsterAttack(){
    return getRandomInRange(8, 12);
}
    // print status(your hp and the monster hp)
void printStatus(int knightLife, int monsterLife){
    printf("Knight HP : %d\n", knightLife > 0 ? knightLife : 0);
    printf("Monster HP : %d\n", monsterLife > 0 ? monsterLife : 0);
}
    // print what happened during each round
void printRoundLog(int knightAction, int knightEffect, int monsterEffect){
    if(knightAction == 'H'){
        printf("You recovered %d HP.\n", knightEffect);
    }else if (knightAction == 'A' || knightAction == 'S'){
        printf("You attack the monster and dealt %d damages.\n", knightEffect);
    }
    printf("The monster attacked and dealt %d damage.\n", monsterEffect);
    printf("----------------------------------------------\n");
}
// game result
void printResult(int knightLife, int monsterLife){
    if  (knightLife > monsterLife){
        printf("Victory!!!You win!!!\n");
    }else if (monsterLife > knightLife) {
        printf("Defeated!!!You lost!!!\n");
    }else if (knightLife == monsterLife){
        printf("It's a draw!!!");
    }
}
// The main
int main() {
    int skill;              // to show that you can use speacial skil or no
    int knightLife = 20;	// The knight lives
    int monsterLife = 20;	// The monster lives
    int turn = 1;			// The round index
    int knightEffect = 0;   // the amount of damage that you about to deal or heal(the damage is random by attack())
    int monsterEffect = 0;  // the amount of damage that monster deal to you
    char knightAction;      // what your knight about to do 
    srand(time(NULL));      // Seed random number generator

    while (knightLife > 0 && monsterLife > 0) { 
	    // Your main code 	
        printf("\n----- Round %d -----\n", turn);
        turn += 1;
        if(turn % 3 == 0){
            skill++ ;
        }

        printf("Choose your action : (A)ttack, (H)eal, (S)peacialAttack\n> ");
        scanf(" %c", &knightAction);
        if ( knightAction == 'A'){
            knightEffect = attack();
            monsterLife -= knightEffect;

        }else if( knightAction == 'H'){
            knightEffect = heal();
            knightLife += knightEffect;

        }else if ( knightAction == 'S'){
            if ( skill > 0){
                knightEffect = specialAttack();
                monsterLife -= knightEffect;
                skill -= 1;

            }else {        
                printf("SpecialAttack is only allowed after 3 rounds\n");
                turn-- ;
                continue;
            }
        } else {
            printf("Invalid input! Input again!");
            turn-- ;
            continue;
        }
        monsterEffect = monsterAttack();
        knightLife -= monsterEffect;

        printStatus(knightLife, monsterLife);
        printRoundLog(knightAction, knightEffect, monsterEffect);
    } 
    printResult(knightLife, monsterLife);
    return 0;
}

