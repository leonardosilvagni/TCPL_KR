// es1-5.c from K&R 
// Leonardo Silvagno 2018
// Goal : Print the fahr-celsius conversion table
#include <stdio.h>

int main(){
	float fahr, celsius;
	const float lower= 0 , upper = 300;
	fahr = upper;
	printf("Fahrenheit\tCelsius\n");
	for(;fahr>=lower;fahr-=20){
		celsius = (5.0/9.0)*(fahr-32);
		printf("%3.0f\t%6.1f\n",fahr,celsius);
};
	return 0;
}
