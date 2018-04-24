#include <stdio.h>
#include <math.h>
/**

When the program executes it will work in the following way:
You must accomplish all the menu options and validation checking exactly as asked.

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit

What you want to do? 1
Enter number: -1
Invalid number for factorial

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 1
Enter number: 5
Factorial of 5 is 120

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit

What you want to do? 20
This program can find factorials only in the range 0 - 10

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 2
Enter a: 2
Enter b: 5
2^5 = 32.0

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 5
Invalid menu option

---- MENU ----
1. Find factorial
2. Find a^b
3. Quit
What you want to do? 3

*** Thank you ***

NOTE: You should use library function pow to find a^b, no need to write code
for finding a^b.

*/

int main(){
	int quit = 0;
	short n;  // n is the number for which you will find factorial
	int p, i;  // you are going to keep the factorial of n in p
	double base, exp; // for a^b

	short option; // for keeping the menu option
	while(!quit){

        printf("---- MENU ----\n1. Find factorial\n2. Find a^b\n3. Quit\n");
        printf("What do you want to do?? ");
        scanf("%hi", &option);

        //Factorial of a number
        if (option == 1){
            printf("Enter Number:");
            scanf("%hi", &n);

            if (n >= 0 && n <= 10){
                i = 1; //loop counter
                p = 1; //initializing the factorial)product as 1
                while (i <= n)
                    p *= i++;
                printf("Factorial of %hi is %d\n\n", n, p);
            }
            else
                printf("This program can find factorials only in the range 0 - 10\n\n");
        }

        else if (option == 3){
            printf("Thank you!!!");
            return 0;
        }

        else if (option == 2){
            printf("Enter a:");
            scanf("%lf", &base);
            printf("Enter b:");
            scanf("%lf", &exp);

            printf("%0.2lf ^ %0.2lf = %0.1lf\n\n", base, exp, pow(base, exp));
        }
        else
            printf("Invalid Menu option\n\n");



	}

    return 0;
}
