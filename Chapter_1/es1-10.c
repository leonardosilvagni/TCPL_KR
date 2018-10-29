// Exercise 1-10 from K&R
// Leonardo Silvagni 29.10.2018 
// Goal: Copy input into output, repalcin tab with \t backspapce with \b and backslash with'\\'
#include <stdio.h>

int main(){
	long c =0;
	printf("Exercise 1-10 from K&R\n  Goal: Copy input into output, repalcin tab with \\t\
backspapce with \\b and backslash with'\\'\n"); 
	while((c=getchar())!=EOF){
	switch(c){
		case '\t':
			printf("\\t");
			break;
		case '\b':
			printf("\\b");
			break;
		case '\\':
			printf("\\\\");
			break;
		default:
			putchar(c);
	};	
	};	
	return 0;
}


