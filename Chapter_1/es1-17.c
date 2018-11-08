// es1-17.c from K&R
// Leonardo Silvagni 2018
// Goal: Print line longer than 80 chars

#include <stdio.h>

int usr_getline(char line[],int maxline);
void copy(char to[], char from[]);
const int MAXLINE = 1000;
int main(){
	int len;
	char line[MAXLINE],longest[MAXLINE];
	while((len = usr_getline(line, MAXLINE)) > 0)
		if(len > 80){
			copy(longest,line);
		if (len>0) printf("%s\n",longest);
		};

	return 0;
}

int usr_getline(char line[], int maxline){
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
