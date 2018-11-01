// es1-13.c from K&R
// Leonardo Silvagni 2018
// Goal: Print an Istogram of the lenght of words in its input

#include <stdio.h>

void print_x_istogram();
void print_y_istogram();
int main(){
	int question;
	printf("h to print horizontal istogram OR v to print vertical istogram\n");
	switch(question=getchar()){
		case 'h':
		case 'H':
			print_x_istogram();
			return 0;
		case 'v':
		case 'V':
			print_y_istogram();
			return 0;
		default:
			print_y_istogram();
			return 0;
	};
}

void print_x_istogram(){
	int c;
	while((c=getchar())!=EOF){
		if(c!=' '&&c!='\n'){
			putchar('*');
		}else putchar('\n');
	};
}

void print_y_istogram(){
	int c,max_char_count=0,word_count=0,state=0,it=0,char_count=0;
	int buf[1000];
	while((c=getchar())!=EOF && it!=998){
		it++;
		buf[it]=c;	
	};
	buf[it+1]=EOF;
	it=0;
	while(buf[it]!=EOF){
		if(buf[it]==' '||buf[it]=='\t'||buf[it]=='\n')state=0;
		else if (state==0){
			state=1;
			if(char_count>max_char_count)max_char_count=char_count;
			char_count=0;
			word_count++;
		}else if(state==1)char_count++;
	it++;
	};
	it=0;
	int char_per_word[word_count];
	while(buf[it]!=EOF){
		if(buf[it]==' '||buf[it]=='\t'||buf[it]=='\n')state=0;
		else if (state==0){
			state=1;
			char_per_word[it]++;};
	it++;
	};
	for(int i=0;i!=max_char_count;i++){
		for(int j=0;j!=word_count;j++){
			if(char_per_word[j]!=0){
				putchar('*');
				char_per_word[j]--;
			}else if(char_per_word[j]==0)putchar(' ');
		};
		putchar('\n');
	};
}








