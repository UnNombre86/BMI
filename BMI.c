#include <stdio.h>

int main(void)
{
	int height;
	int weight;

	printf("\nIngrese su altura en centímetros: ");
	scanf("%d", &height);
	printf("\nIngrese su peso en Kg: ");
	scanf("%d", &weight);

	printf("\nSu Índice de masa corporal es: %0.1f\n", weight/(height*height/10000.0));

	printf("Índice | Condición\n<18.5 | Bajo peso\n18.5-24.9 | Peso regular\n25-29.9 | Sobrepeso\n>=30 | Obesidad\n\n\n");

	return(0);
}
