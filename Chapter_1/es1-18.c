// es1-18.c from K&R
// Leonardo Silvagni 2018
// Goal: Remove Trailing Blanks 

#include <stdio.h>
int usr_getline(char line[],int maxline);
void copy(char to[],char from[]);
#define MAXLINE 1000
int main(){
	char line[MAXLINE]={'\0'};
	char better_s[MAXLINE]={'\0'};
	usr_getline(line,MAXLINE);
	copy(better_s,line);
			printf("%s|\n",line);
	return 0;
}
int usr_getline(char line[], int maxline){
	int c,i,last_letter;
	for(i=0;i<maxline-1&&(c=getchar())!=EOF&&c!='\n';++i){
		line[i]=c;
		if(c!=' '&&c!='\t')
			last_letter=i;
	}
	line[last_letter+1]='\0';
	return last_letter+1;
}
void copy(char to[], char from[]){
	int i=0;
	while ((to[i]=from[i]) != '\0') ++i;
}
