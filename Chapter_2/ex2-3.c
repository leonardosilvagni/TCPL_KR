// Ex2-3.c from K&R
// Leonardo Silvagni 2018
// Goal: write a function htoi to convert hexadecimal string to integer
#include <stdio.h>
#define MAXLINE 1000
int htoi(char string_from[]);
int usr_getline(char string[]);
int main(){
	char string_to_hex[MAXLINE];
	while(usr_getline(string_to_hex)>=1){
		printf("The integer is %d\n",htoi(string_to_hex));
	}

}
int htoi(char string_from[]){
	unsigned long int i=0,dec=0;
	for(;i<MAXLINE-1&&string_from[i]!='\n'&&string_from[i]!=EOF;++i){
		switch(string_from[i]){
			case 'a':
			case 'A':
				dec+=10;
				dec*=16;break;
			case 'b':
			case 'B':
				dec+=11;
				dec*=16;break;
			case 'c':
			case 'C':
				dec+=12;
				dec*=16;break;
			case 'd':
			case 'D':
				dec+=13;
				dec*=16;break;
			case 'e':
			case 'E':
				dec+=14;
				dec*=16;break;
			case 'f':
			case 'F':
				dec+=15;
				dec*=16;break;
			case '0':
				dec*=16;break;
			case '1':
				dec++;
				dec*=16;break;
			case '2':
				dec+=2;
				dec*=16;break;
			case '3':
				dec+=3;
				dec*=16;break;
			case '4':
				dec+=4;
				dec*=16;break;
			case '5':
				dec+=5;
				dec*=16;break;
			case '6':
				dec+=6;
				dec*=16;break;
			case '7':
				dec+=7;
				dec*=16;break;
			case '8':
				dec+=8;
				dec*=16;break;
			case '9':
				dec+=9;
				dec*=16;break;
		
		};
		
	}
	dec/=16;
	return dec;	
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
