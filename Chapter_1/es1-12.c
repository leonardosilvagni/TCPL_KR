// Exercise 1-12 from K&R
// Leonardo Silvagni v2018 
// Goal: Print One word per line
#include <stdio.h>

int main(){
	long c =0;
	int was_blank=0;
	printf("Exercise 1-12 from K&R\nGoal: Print one word per line \n"); 
	while((c=getchar())!=EOF){
		if(c==' '||c=='\t'){
			if(was_blank==0){
			was_blank=1;
			putchar('\n');
			};
		}else{
		putchar(c);
		was_blank=0;};
	};	
	return 0;
}


