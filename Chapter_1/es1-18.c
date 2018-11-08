// es1-18.c from K&R
// Leonardo Silvagni 2018
// Goal: Remove Trailing Blanks 

#include <stdio.h>
void usr_remove_trailing_blanks(char line[]);
int usr_getline(char line[],int maxline);
const int MAXLINE = 1000;
int main(){
	int len;
	char line[MAXLINE],longest[MAXLINE];
	while((len = usr_getline(line, MAXLINE)) > 0)
		if(len > 80){
		if (len>0) printf("%s\n",longest);
		};

	return 0;
}
void usr_remove_trailing_blanks(char line[]){
	int i=0,c;
POINT:
	switch(c=line[i]){
		case ' ':
		case '\t':
			i++;
			goto POINT;
		case '\n':
			// THE idea is to replace this wit nothing, so better move to the getline function, without
			// abusing the functions
	};
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

