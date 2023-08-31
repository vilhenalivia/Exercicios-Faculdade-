#include<stdio.h>

float C, F;

int main()
{
	printf("Temperatura em graus Celsius: ");
	scanf("%f", &C);
	
	F = (9 * C + 160)/5;
	
	printf("O valor em Fahrenheit e: %f", F);
	
}
