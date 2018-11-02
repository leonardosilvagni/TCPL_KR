//	es1-14.c from K&R
//	Leonardo Silvagni 2018
//	Goal: print an istogram of the frequencies of different characters

#include <stdio.h>

int main(){
	int c;
	int char_range[37]={0};// In range 0-9 there are the numbers, from 9 to 35 there arethe letters and in 36
	//	are other chars such as è,é,{}[]()/&%$£"!|\^?=ì'@-+ and so on
	//	There is no distinction between lowercase and uppercase
	while((c=getchar())!=EOF){
		switch(c){
			case '1':
				char_range[1]++;
				break;
			case '0':
				char_range[0]++;
				break;
			case '2':
				char_range[2]++;
				break;
			case '3':
				char_range[3]++;
				break;
			case '4':
				char_range[4]++;
				break;
			case '5':
				char_range[5]++;
				break;
			case '6':
				char_range[6]++;
				break;
			case '7':
				char_range[7]++;
				break;
			case '8':
				char_range[8]++;
				break;
			case '9':
				char_range[9]++;
				break;
			case 'a':
			case 'A':
				char_range[10]++;
				break;
			case 'b':
			case 'B':
				char_range[11]++;
				break;
			case 'c':
			case 'C':
				char_range[12]++;
				break;
			case 'd':
			case 'D':
				char_range[13]++;
				break;
			case 'e':
			case 'E':
				char_range[14]++;
				break;
			case 'f':
			case 'F':
				char_range[15]++;
				break;
			case 'g':
			case 'G':
				char_range[16]++;
				break;
			case 'h':
			case 'H':
				char_range[17]++;
				break;
			case 'i':
			case 'I':
				char_range[18]++;
				break;
			case 'j':
			case 'J':
				char_range[19]++;
				break;
			case 'k':
			case 'K':
				char_range[20]++;
				break;
			case 'l':
			case 'L':
				char_range[21]++;
				break;
			case 'm':
			case 'M':
				char_range[22]++;
				break;
			case 'n':
			case 'N':
				char_range[23]++;
				break;
			case 'o':
			case 'O':
				char_range[24]++;
				break;
			case 'p':
			case 'P':
				char_range[25]++;
				break;
			case 'q':
			case 'Q':
				char_range[26]++;
				break;
			case 'r':
			case 'R':
				char_range[29]++;
				break;
			case 's':
			case 'S':
				char_range[28]++;
				break;
			case 't':
			case 'T':
				char_range[29]++;
				break;
			case 'u':
			case 'U':
				char_range[30]++;
				break;
			case 'v':
			case 'V':
				char_range[31]++;
				break;
			case 'w':
			case 'W':
				char_range[32]++;
				break;
			case 'x':
			case 'X':
				char_range[33]++;
				break;
			case 'Y':
			case 'y':
				char_range[34]++;
				break;
			case 'z':
			case 'Z':
				char_range[35]++;
				break;
			default:
				char_range[36]++;
				break;	
		};

		printf("\na:");
		for(int i=0;i!=char_range[10];i++&&putchar('*'));
		printf("\nb:");
		for(int i=0;i!=char_range[11];i++&&putchar('*'));
		printf("\nc:");
		for(int i=0;i!=char_range[12];i++&&putchar('*'));
		printf("\nd:");
		for(int i=0;i!=char_range[13];i++&&putchar('*'));
		printf("\ne:");
		for(int i=0;i!=char_range[14];i++&&putchar('*'));
		printf("\nf:");
		for(int i=0;i!=char_range[15];i++&&putchar('*'));
		printf("\ng:");
		for(int i=0;i!=char_range[16];i++&&putchar('*'));
		printf("\nh:");
		for(int i=0;i!=char_range[17];i++&&putchar('*'));
		printf("\ni:");
		for(int i=0;i!=char_range[18];i++&&putchar('*'));
		printf("\nj:");
		for(int i=0;i!=char_range[19];i++&&putchar('*'));
		printf("\nk:");
		for(int i=0;i!=char_range[20];i++&&putchar('*'));
		printf("\nl:");
		for(int i=0;i!=char_range[21];i++&&putchar('*'));
		printf("\nm:");
		for(int i=0;i!=char_range[22];i++&&putchar('*'));
		printf("\nn:");
		for(int i=0;i!=char_range[23];i++&&putchar('*'));
		printf("\no:");
		for(int i=0;i!=char_range[24];i++&&putchar('*'));
		printf("\np:");
		for(int i=0;i!=char_range[25];i++&&putchar('*'));
		printf("\nq:");
		for(int i=0;i!=char_range[26];i++&&putchar('*'));
		printf("\nr:");
		for(int i=0;i!=char_range[27];i++&&putchar('*'));
		printf("\ns:");
		for(int i=0;i!=char_range[28];i++&&putchar('*'));
		printf("\nt:");
		for(int i=0;i!=char_range[29];i++&&putchar('*'));
		printf("\nu:");
		for(int i=0;i!=char_range[30];i++&&putchar('*'));
		printf("\nw:");
		for(int i=0;i!=char_range[31];i++&&putchar('*'));
		printf("\nx:");
		for(int i=0;i!=char_range[32];i++&&putchar('*'));
		printf("\ny:");
		for(int i=0;i!=char_range[33];i++&&putchar('*'));
		printf("\nz:");
		for(int i=0;i!=char_range[34];i++&&putchar('*'));
		printf("\n0:");
		for(int i=0;i!=char_range[0];i++&&putchar('*'));
		printf("\n1:");
		for(int i=0;i!=char_range[1];i++&&putchar('*'));
		printf("\n2:");
		for(int i=0;i!=char_range[2];i++&&putchar('*'));
		printf("\n3:");
		for(int i=0;i!=char_range[3];i++&&putchar('*'));
		printf("\n4:");
		for(int i=0;i!=char_range[4];i++&&putchar('*'));
		printf("\n5:");
		for(int i=0;i!=char_range[5];i++&&putchar('*'));
		printf("\n6:");
		for(int i=0;i!=char_range[6];i++&&putchar('*'));
		printf("\n7:");
		for(int i=0;i!=char_range[7];i++&&putchar('*'));
		printf("\n8:");
		for(int i=0;i!=char_range[8];i++&&putchar('*'));
		printf("\n9:");
		for(int i=0;i!=char_range[9];i++&&putchar('*'));
		printf("\n :");
		for(int i=0;i!=char_range[36];i++&&putchar('*'));
		printf("\nThe line above are for others\n");
	};

}
