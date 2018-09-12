#include <iostream>
#include <conio.h>
#include <stdio.h>
 
typedef struct
{
    char nombre[20];
    char marca[20];
    int costo;
}Producto;
 
void leerProducto(Producto p[]);
 
int main()
{
    Producto DATOS[5];
    leerProducto(DATOS);
 
    return 0;
}
void leerProducto(Producto p[])
{
    int i;
    printf("Introduce los datos de 5 productos\n");
    for(i = 0; i < 5; i++)
    {
        printf("\nIntroduce el %d producto\n", i+1);
        printf("Nombre:\t");
        scanf("%s", p[i].nombre);
        printf("Marca:\t");
        scanf("%s", p[i].marca);
        printf("Costo:\t");
        scanf("%d", &p[i].costo);
	}
}
