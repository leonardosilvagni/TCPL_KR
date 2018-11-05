// es1-14.c from K&R
// Leonardo Silvagni 2018
// Goal: print an istogram of the frequencies of different characters

#include <stdio.h>

int main(){
	int c;
	int char_range[37]={1};// In range 0-9 there are the numbers, from 9 to 35 there arethe letters and in 36
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
		for(int i=0;i!=char_range[10];putchar('*')&&i++);
		printf("\nb:");
		for(int i=0;i!=char_range[11];putchar('*')&&i++);
		printf("\nc:");
		for(int i=0;i!=char_range[12];putchar('*')&&i++);
		printf("\nd:");
		for(int i=0;i!=char_range[13];putchar('*')&&i++);
		printf("\ne:");
		for(int i=0;i!=char_range[14];putchar('*')&&i++);
		printf("\nf:");
		for(int i=0;i!=char_range[15];putchar('*')&&i++);
		printf("\ng:");
		for(int i=0;i!=char_range[16];putchar('*')&&i++);
		printf("\nh:");
		for(int i=0;i!=char_range[17];putchar('*')&&i++);
		printf("\ni:");
		for(int i=0;i!=char_range[18];putchar('*')&&i++);
		printf("\nj:");
		for(int i=0;i!=char_range[19];putchar('*')&&i++);
		printf("\nk:");
		for(int i=0;i!=char_range[20];putchar('*')&&i++);
		printf("\nl:");
		for(int i=0;i!=char_range[21];putchar('*')&&i++);
		printf("\nm:");
		for(int i=0;i!=char_range[22];putchar('*')&&i++);
		printf("\nn:");
		for(int i=0;i!=char_range[23];putchar('*')&&i++);
		printf("\no:");
		for(int i=0;i!=char_range[24];putchar('*')&&i++);
		printf("\np:");
		for(int i=0;i!=char_range[25];putchar('*')&&i++);
		printf("\nq:");
		for(int i=0;i!=char_range[26];putchar('*')&&i++);
		printf("\nr:");
		for(int i=0;i!=char_range[27];putchar('*')&&i++);
		printf("\ns:");
		for(int i=0;i!=char_range[28];putchar('*')&&i++);
		printf("\nt:");
		for(int i=0;i!=char_range[29];putchar('*')&&i++);
		printf("\nu:");
		for(int i=0;i!=char_range[30];putchar('*')&&i++);
		printf("\nv:");
		for(int i=0;i!=char_range[31];putchar('*')&&i++);
		printf("\nw:");
		for(int i=0;i!=char_range[32];putchar('*')&&i++);
		printf("\nx:");
		for(int i=0;i!=char_range[33];putchar('*')&&i++);
		printf("\ny:");
		for(int i=0;i!=char_range[34];putchar('*')&&i++);
		printf("\nz:");
		for(int i=0;i!=char_range[35];putchar('*')&&i++);
		printf("\n0:");
		for(int i=0;i!=char_range[0];putchar('*')&&i++);
		printf("\n1:");
		for(int i=0;i!=char_range[1];putchar('*')&&i++);
		printf("\n2:");
		for(int i=0;i!=char_range[2];putchar('*')&&i++);
		printf("\n3:");
		for(int i=0;i!=char_range[3];putchar('*')&&i++);
		printf("\n4:");
		for(int i=0;i!=char_range[4];putchar('*')&&i++);
		printf("\n5:");
		for(int i=0;i!=char_range[5];putchar('*')&&i++);
		printf("\n6:");
		for(int i=0;i!=char_range[6];putchar('*')&&i++);
		printf("\n7:");
		for(int i=0;i!=char_range[7];putchar('*')&&i++);
		printf("\n8:");
		for(int i=0;i!=char_range[8];putchar('*')&&i++);
		printf("\n9:");
		for(int i=0;i!=char_range[9];putchar('*')&&i++);
		printf("\n :");
		for(int i=0;i!=char_range[36];putchar('*')&&i++);
		printf("\nThe line above is for others\n");
	};

}
