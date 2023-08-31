#include <stdio.h>

float C, F;

int main()
{
	printf("Temperatura em graus Fahrenheit: ");
	scanf("%f", &F);
	
	C = (F - 32)* 5 / 9;
	
	printf("O valor em Celsius e: %f", C);
}
