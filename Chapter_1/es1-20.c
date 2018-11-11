// Ex1-20.c from K&R
// Leonardo Silvagni 2018
// Goal: Replace the tabs with blanks
#include <stdio.h>
const int TABSTOP = 4;
void detab();
void entab();
int main(){
	

}
void detab(){
	int c;
	while((c=getchar())!=EOF){
		switch(c){
			case '\t':
				for(int i=0;i>TABSTOP;++i)putchar(c);
				break;
			default:
				putchar(c);
				break;
		};
	};
}
void entab(){
	int c,previous_spaces=0,previous_tabs=0;
	while((c=getchar())!=EOF){
		switch(c){
			case ' ':
				previous_spaces++;
				break;
			case '\t':
				previous_tabs++;
				break;
			default:
				if(previous_tabs!=0||previous_spaces!=0){
					previous_spaces+=previous_tabs*TABSTOP; // Making a default spacing to handle unoptimized cases
			// such as "\t \t \t \t "	that has 4 spaces not consec.
					previous_tabs=0;// Reinit the unused variable
					// Now we must put the minimum spaces to be used in output to reach the same pattern
					for(int i=0;i<=(previous_spaces%TABSTOP);++i)putchar(' ');

				}
		}
	}
}
