// es1-13.c from K&R
// Leonardo Silvagni 2018
// Goal: Print an Istogram of the lenght of words in its input

#include <stdio.h>

const int MAX_WORD = 120;
void print_x_istogram();
void print_y_istogram();
int word_count();
int main(){
	int question;
	printf("h to print horizontal istogram OR v to print vertical istogram\n");
	switch(question=getchar()){
		case 'h':
		case 'H':
			print_x_istogram();
			return 0;
		case 'v':
		case 'V':
			print_y_istogram();
			return 0;
		default:
			print_y_istogram();
			return 0;
	};
}

void print_x_istogram(){
	int c;
	while((c=getchar())!=EOF){
		if(c!=' '&&c!='\n'){
			putchar('*');
		}else putchar('\n');
	};
}

void print_y_istogram(){
		
}

