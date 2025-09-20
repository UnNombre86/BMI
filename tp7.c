// https://github.com/UnNombre86/BMI# //

#include <stdio.h>
#define TAM 5

int main()
{
    float precios[TAM] = {[TAM-1]=99999999999};
    unsigned int productos[TAM] = {0};
    int ind_max=TAM-2;
    int ind_min=TAM-1;
    
    for(int i=0; i<TAM; i++)
    {
        
        do{
            
            printf("Ingrese el código de barras (1-999999999): ");
            scanf(" %d", &productos[i]);
            if(productos[i] < 1 || productos[i] > 99999999)
            {
                printf("Error. El código de barras debe estar entre 1 y 999999999\n\n");
            }
            
        } while (productos[i] < 1 || productos[i] > 99999999);
        
        do{
            
            printf("Ingrese el precio: ");
            scanf(" %f", &precios[i]);
            if(precios[i] < 0)
            {
                printf("El precio no está permitido\n\n");
            }
            
        } while (precios[i] < 1);
        
        if(precios[i] > precios[ind_max])
            ind_max=i;
        if(precios[i] < precios[ind_min])
            ind_min=i;
    }
    
    printf("\n\n\nProducto\tPrecio\n\n");
    
    for(int i=0; i<TAM; i++)
    {
        
        printf("%d\t\t%.2f\n\n", productos[i], precios[i]);
        
    }
    
    printf("\n\nMás caro: [%d] %.2f", productos[ind_max], precios[ind_max]);
    printf("\nMás barato: [%d] %.2f", productos[ind_min], precios[ind_min]);
    

    
    return 0;
}