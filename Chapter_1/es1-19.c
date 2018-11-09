// ex1-19.c from k&R
// Leonardo Silvagni 2018
// Goal: Write a function to reverse a string
#include <stdio.h>
#define MAXLINE 1000
int usr_getline(char string[],int max);
void usr_reverse(char string[],int len);
int main(){
	char line[MAXLINE]={'\0'};
	int lenght;
	while((lenght=usr_getline(line,MAXLINE))>0){
		usr_reverse(line,lenght);
		printf("%s\n",line);
	}
	return 0;
}

int usr_getline(char string[],int max){
	int c,i=0;
	for(i=0;i<max-1&&(c=getchar())!=EOF&&c!='\n';++i) string[i]=c;
	if(c=='\n'){
		string[i]=c;
		++i;
	}
	string[i]='\0';
	return i;
}
void usr_reverse(char string[],int len){
	char string1[len];
	for(int i=0;i<=len-1;i++){
		string1[len-1-i]=string[i];
	};
	string1[len]='\0';
	int i=0;
	while((string[i]=string1[i])!='\0')++i;
}
