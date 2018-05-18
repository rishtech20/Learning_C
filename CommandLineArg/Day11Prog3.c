/*Program to get all the environmental parameters from the O.S and printing them on the screen*/

#include <stdio.h>

int main(int argc, char ** argv, char ** envp){
	for (int i = 0; envp[i] != '\0'; i++){
		printf("%s\n", envp[i]);
	}
	return 0;
}