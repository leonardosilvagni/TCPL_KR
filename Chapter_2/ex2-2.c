// Ex2-2.c from K&R
// Leonardo Silvagni 2018
// Goal: write a function getline without using && and ||
#include <stdio.h>
#define MAXLINE 100
int main(){
	int c,lim=MAXLINE,i=0;
	int string[MAXLINE];
	while(i<=lim-1){
		if((c=getchar())!=EOF){
			if(c!='\n'){
				string[i]=c;
				++i;
			}else return 0;
		}else return 0;
	
	}return 0;
}
