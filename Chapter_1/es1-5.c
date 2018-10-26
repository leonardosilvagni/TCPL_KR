// K&R first chapter exercise 1.5

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
