#include <stdio.h>
// Assignment - 1, Section - 2.
/** Please read the instructions in the comment and 
	write the code accordingly. 
	This assignment will test your understanding with console input and output.
	Just in case if you do not know the meaning of the term 'console', we typically
	indicate it to mean keyboard and terminal. Input console indicates to keyboard and 
	output console indicates terminal.
	This will also test your ability to use variables.
*/	
int main(){
	// Please follow the instructions and write the code chronologically.
	//  1. Declare a double type variable named rate and assign 0.06 to it
	//  2. Declare an integer variable, name it duration.
	//  3. Declare a double variable and name it principal_amount
	//  4. Declare a double variable and name it total_interest
	//  5. Prompt user to input duration in year. Read the year value in duration using 
	//	   scanf. Since duration is integer you must use %d.
	//	6. Prompt user to input principal amount of loan. Read the value in the 
	//	   variable principal_amount. Think about the format specifier this time. 
	//	   principal_amount is not an integer, it is a double, so use the format specifier
	//	   of double.
	//  7. Now you will calculate the total interest, if R is rate, D is duration and P 
	//	   is principal then the total interest should be calculated as follows:
	//		I = (P * D * R)
	//	   Use the above formula to calculate the total interest and finally print the 
	//     amount into the console. Your output should be like the following: 
	//	   Output: 
	//	   		Your total payable interest is $3000.000000  when principal_amount given as 1000.0, duration is 5						 
	//			
	
	// required variable declarations
	double rate = 0.06;
	int duration;
	double principal_amount;
	double total_interest;

	// prompting user to input duration.
	printf("Enter duration (in years): ");
	// scanning duration
	scanf("%d", &duration);

	// ***uncomment the following line when you check answers of Q2 & Q3 ***
	// printf("duration = %d\n", duration);    
	// Now we should input principal
	printf("Enter principal amount ($): ");
	scanf("%lf", &principal_amount);  

	// ***uncomment the following line when you check answers of Q2 & Q3 ***
	// printf("principal = %lf\n", principal_amount); 
	// Notice %lf is the format specifier for double

	// calculating total_interest, this is simple interest actually
	total_interest = (principal_amount * duration * rate);

	// Now we need to print the output.
	printf("Your total payable interest is $%f\n", total_interest);

	return 0;

}

/**
Explanation of Q2:
When you input 2.5 for an integer field, scanf takes only the integer portion
of the real number, that is 2 and assigns that to the integer variable duration, 
the part after decimal point is rejected by scanf, but you have input it, 
isn't it? so that goes into the memory and remains there. 
Now in the next scanf when you are suppose to input a double value 
for principal_amount, then the scanf takes that 0.5 that was there from 
the previous input and assigns that to principal_amount and never waits for 
user to input the value. 
Finally the interest is calculated using duration = 2, principal_amount = 0.5 
and rate = 0.06 and we get interest as 0.00600.
*/