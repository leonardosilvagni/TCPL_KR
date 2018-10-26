// Exercise 1-8 from K&R
// Leonardo Silvagni 26.10.2018
// Goal: Write a porgram to count newline, tabs and blank
#include <stdio.h>

int main(){
	long blanks=0,tabs=0,newlines=0;
	long it=0;
	printf("Exercise 1-8 from K&R\nGoal: Write a program to count \n,\t and blanks\nType your input and then press\
			<CTRL>+D to get the result|\n");
	while((it=getchar())!=EOF){
		blanks += (it==' ')?(1):(0);
		tabs += (it=='\t')?(1):(0);
		newlines += (it=='\n')?(1):(0);
	}
	printf("Blanks:%3ld\nTabs:%3ld\nNewlines:%3ld\n",blanks,tabs,newlines);
}


