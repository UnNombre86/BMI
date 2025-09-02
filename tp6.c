#include <stdio.h>
#include <math.h>


int calcularAreaRectangulo(int longitud, int altura)
{
	return (longitud*altura);
}


int calcularPerimetroRectangulo(int longitud, int altura)
{
	return (longitud*2+2*altura);
}


float calcularDiagonalRectangulo(int longitud, int altura)
{
	return(sqrt(longitud*longitud+altura*altura));
}


int calcularPerimetroCirculo(int radio)
{
	return(2*M_PI*radio);
}


int calcularAreaCirculo(int radio)
{
	return(M_PI*radio*radio);
}

int imprimirResultados(int area, int perimetro, float diagonal)
{
	if(diagonal)
		printf("\nEl perímetro del rectángulo es de %dcm\nEl área del rectángulo es de %dcm cuadrados\nLa diagonal del rectánculo mide %.2fcm", perimetro, area, diagonal);
	else
		printf("\nEl perímetro del círculo es de %dcm\nEl área del círculo es de %dcm cuadrados", perimetro, area);
}

int main()
{

	int opcion;

	do{
		printf("Ingrese la figura que desea calcular (1-Rectángulo, 2-Círculo): ");
		scanf(" %d", &opcion);
		opcion--;
		if(opcion!=0&&opcion!=1)
			printf("El dato ingresado no está en las opciones\n\n");

	} while (opcion!=0&&opcion!=1);

	if(opcion){

		int radio;

		printf("Opción de círculo seleccionada\n\n");
		do{

			printf("Ingrese el radio del círculo en cm: ");
			scanf(" %d", &radio);
			if(radio <= 0)
				printf("El radio no puede ser menor a 1cm\n\n");
		} while (radio <= 0);

		imprimirResultados(calcularAreaCirculo(radio),calcularPerimetroCirculo(radio),0.0);
	}
	else
	{
		int longitud_rect, altura_rect;
		printf("Opción de rectángulo seleccionada\n\n");
		do{
			printf("Ingrese la altura del rectángulo en cm: ");
			scanf(" %d", &altura_rect);
			printf("Ingrese la longitud del rectángulo en cm: ");
			scanf(" %d", &longitud_rect);
			if(altura_rect <= 0 || longitud_rect <= 0)
				printf("Ninguna medida puede ser menor a 1cm\n\n");
		} while (altura_rect <= 0 || longitud_rect <= 0);
		
		imprimirResultados(calcularAreaRectangulo(longitud_rect, altura_rect),calcularPerimetroRectangulo(longitud_rect, altura_rect),calcularDiagonalRectangulo(longitud_rect, altura_rect));
	}

	return 0;
}
