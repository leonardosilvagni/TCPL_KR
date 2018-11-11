// Ex1-20.c from K&R
// Leonardo Silvagni 2018
// Goal: Replace the tabs with blanks
#include <stdio.h>
#define TABSTOP 4
void detab();
void entab();
int main(){
	int input;
	printf("%6d%6d%6d%6d",1%4,2%4,3%4,4%4);
	printf("Input only a number: 0 to detab, 1 to entab.");
	input=getchar();
	if (input=='0')detab();
	if (input=='1')entab();
	return 0;
}
void detab(){
	int c;
	while((c=getchar())!=EOF){
			if(c=='\t'){
				for(int i=1;i<TABSTOP;i++)putchar(' ');
			}else {
				putchar(c);
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
					if(previous_spaces==TABSTOP)putchar('\t');
					else if(previous_spaces<TABSTOP)
						for(int i=0;i<previous_spaces;i++)putchar(' ');
					// Now we must put the minimum spaces to be used in output to reach the same pattern
					else if(previous_spaces>TABSTOP){
						for(int i=0;i<(previous_tabs=(previous_spaces%TABSTOP));i++)putchar(' ');
					
					// Now we remove that from the spaces number, note that prev_tab is used for convenience
					previous_spaces-=previous_tabs;
					previous_tabs=previous_spaces/TABSTOP;// Reinit the unused variable
					for(int i=0;i<=previous_tabs;i++)putchar('\t');}
				};
				putchar(c);
		}
	}
}
