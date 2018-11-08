// es1-18.c from K&R
// Leonardo Silvagni 2018
// Goal: Remove Trailing Blanks 

#include <stdio.h>
void usr_remove_trailing_blanks(char line[]);
int usr_getline(char line[],int maxline);
#define MAXLINE 1000
int main(){
	int len;
	char line[MAXLINE]={'\0'};
	while((len = usr_getline(line, MAXLINE)) > 0)
		if (len>0) printf("%s\n",line);
	return 0;
}
			// THE idea is to replace this wit nothing, so better move to the getline function, without
			// abusing the functions
int usr_getline(char line[], int maxline){
	int c,i;
POINT:
	for(i=0;i<maxline-1&&(c=getchar())!=EOF&&c!='\n';++i){
		switch(c){
			case ' ':
			case '\t':
				goto POINT;
				break;
			default:
				line[i]=c;
				break;
		};
	}
	if(i==0&&c=='\n'){
		return 1;
	};
	if(c=='\n'){
	line[i]=c;
	++i;};
	line[i]='\0';
	return i;
}

