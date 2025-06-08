#include <stdio.h>

int main(void)
{
	int height;
	int weight;
	float bmi;

	printf("\nIngrese su altura en centímetros: ");
	scanf("%d", &height);
	printf("\nIngrese su peso en Kg: ");
	scanf("%d", &weight);

	bmi = weight/(height*height/10000.0);

	printf("\nSu Índice de masa corporal es: %0.1f\n", bmi);

	printf("Su condición es: ");
	if(bmi < 18.5)
		printf("Bajo peso\n");
	else
		if(bmi < 25)
			printf("Peso regular\n");
		else
			if(bmi < 30)
				printf("Sobrepeso\n");
			else
				printf("Obesidad\n");

	printf("\nÍndice | Condición\n<18.5 | Bajo peso\n18.5-24.9 | Peso regular\n25-29.9 | Sobrepeso\n>=30 | Obesidad\n\n\n");

	return(0);
}
