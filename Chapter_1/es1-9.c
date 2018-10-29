// es1-9.c from K&R
// Leonardo Silvagni 26.10.2018 
// Goal: Copy input to output, repacing lines with each consecutive blank with a single blank 
#include <stdio.h>

int main(){
	long c =0;
	int was_blank=0;
	printf("Exercise 1-9 from K&R\nGoal: Replace each consecutive blank with a single blank \n"); 
	while((c=getchar())!=EOF){
		if(c==' '||c=='\t'){
			if(was_blank==0){
			was_blank=1;
			putchar(c);
			};
		}else{
		putchar(c);
		was_blank=0;};
	};	
	return 0;
}


