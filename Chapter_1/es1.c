// K&R first chapter exercise 1.3 && 1.4

#include <stdio.h>

int main(){
	float fahr, celsius;
	const float lower= 0 , upper = 300, step = 20;
	fahr = lower;
	printf("Fahrenheit\tCelsius\n");
	while(fahr<=upper){
		celsius = (5.0/9.0)*(fahr-32);
		printf("%3.0f\t%6.1f\n",fahr,celsius);
		fahr += step;
	}
	celsius = 0;
	fahr=0;
	printf("Celsius\tFarenheit\n");
	while(celsius<=upper){
		fahr = (celsius*9.0/5.0)+32;
		printf("%3.0f\t%6.1f\n",celsius,fahr);
		celsius+=step;
	
	};
	return 0;
}
