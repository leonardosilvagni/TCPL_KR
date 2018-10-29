// es 1-7.c from K&R 
// Leonardo Silvagni 26.10.2018
// Goal: Write a program to print the value of EOF

#include <stdio.h>
int main(){
	int c;
	printf("Exercise 1-7 from K&R\nGoal: Print the value of EOF\nType any charachter and then type <CTRL>+D to end!\n");
	while ((c = getchar())!= EOF){
		putchar(c);
	};
	printf("The value of EOF is %d\n",EOF);	
return 0;
}
