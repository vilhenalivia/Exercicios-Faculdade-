#include<stdio.h>
#include<math.h>

float volume;
float pi = 3.14;
float altura;
float raio;

int main(void)
{
	float volume;
	float pi = 3.14;
	float altura;
	float raio;
	
	printf("Altura: ");
	scanf("%f", &altura);
	
	printf("Raio: ");
	scanf("%f", &raio);
	
	volume = (pi * pow(raio , 2)* altura);
	
	printf("Volume: %f", volume);	
	
}
