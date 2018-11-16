// Ex2-4.c from K&R
// Leonardo Silvagni 2018
// Goal: write a function squeeze(s1[],s2[]) that eliminate each char in s1 tha match any in s2
#include <stdio.h>
#define MAXLINE 512
void squeeze(char s1[],char s2[]);
int usr_getline(char s[]);
int main(){
	char buf1[MAXLINE]={'\0'};
	char buf2[MAXLINE]={'\0'};
	printf("Input the string with the chars to delete from the string:\n");
	usr_getline(buf2);
	printf("Ok, now input the lines:\n");
	while(usr_getline(buf1)>=1){
		squeeze(buf1,buf2);
		printf("The result is :\n%s",buf2);
	}

}

void squeeze(char s1[],char s2[]){
	int i,j,k;
	for(i=j=0;s1[i]!='\0';++i){
		for(k=0;s2[k]!='\0';++k){
			if(s1[i]!=s2[k]){
				s1[j++]=s1[i];
			}
		}
	}
}

int usr_getline(char string[]){
	int c,i;
	for(i=0;i<MAXLINE-1&&(c=getchar())!= EOF&& c!='\n';++i)
		string[i]=c;
	if(c=='\n'){
		string[i]=c;
		++i;
	};
	return i;
}
