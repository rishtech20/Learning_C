/*
*
* Author: Rishabh Madan
* Problem: Dice Game
* Day4 Program 11
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //Initializing the constants and variables to be used in the program
    int comp_guess1, comp_guess2, user_guess, t, k, score = 0, corr = 0, incorr = 0;
    const int lose = -5, win = 10;
    user_guess = 21; //guess should be negative to terminate the loop.

    while (user_guess > 0){
        t = time(NULL);
        srand(t);
        comp_guess1 = (rand()%6) + 1;
        for(int i = 0; i <= comp_guess1*1000; i++)
            t = t+i;
        srand(t);
        comp_guess2 = (rand()%6) + 1;

        printf("cg1 = %d, cg2 = %d\n", comp_guess1, comp_guess2);

        printf("Computer rolled two dice....Guess the sum\nEnter any number <= 0 to terminate.\n\n");
        printf("Enter your guess: ");
        scanf("%d", &user_guess);

        if (user_guess != (comp_guess1 + comp_guess2)){
            score += lose;
            incorr++;
            printf("Darn!!! Bad Attempt, %d\nSum was: %d\n\n\n", lose, (comp_guess1+comp_guess2));
        }
        else if (user_guess == (comp_guess1 + comp_guess2)){
            score += win;
            corr++;
            printf("Bravo!!! you were correct, +%d\n\n\n", win);
        }

        //Printing the statistics for the game after each guess and its evaluation
        printf("Total correct: %d\nTotal incorrect: %d\nScore: %d\n", corr, incorr, score);
        printf("\n\n");
    }

    return 0;
}
