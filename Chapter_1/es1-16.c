// es1-16.c from K&R
// Leonardo Silvagni 2018
// Goal: Revise the program of thelongest input line

#include <stdio.h>

int getline(char [],int );
void copy(char [], char []);
const int MAXLINE = 1000;
int main(){
	int len,max=0;
	char line[MAXLINE],longest[MAXLINE];
	while((len =getline(line, MAXLINE)) > 0)
		if(len > max){
			max = len;
			copy(longest,line);
		};
	if (max>0) printf("%s",longest);
	return 0;
}

int getline(char line[], int maxline){
	int c,i;
	for(i=0;i<maxline-1&&(c=getchar())!=EOF&&c!='\n';++i)
		line[i]=c;
	if(c=='\n'){
	line[i]=c;
	++i;};
	line[i]='\0';
	return i;
}

void copy(char to[], char from[]){
	int i=0;
	while ((to[i]=from[i]) != '\0') ++i;
}
