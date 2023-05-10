#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const int columna = 100;
int cargarArreglo(char nombre[][columna], int edad[], int dimension);
int main()
{
    int dimension = 100;
    char nombre[dimension][columna];
    int edad[dimension];

    int validos = cargarArreglo(nombre, edad, dimension);

    for(int i=0; i<validos; i++)
    {
        puts(nombre[i]);
        printf("%i", edad[i]);
    }

    return 0;
}
int cargarArreglo(char nombre[][columna], int edad[], int dimension)
{
    char i = 's';
    int validos = 0;
    while(i == 's' && validos<dimension)
    {
        printf("Ingrese el nombre a cargar \n");
        fflush(stdin);
        gets(nombre[validos]);

        printf("Ingrese la edad \n");
        scanf("%i", &edad[validos]);

        printf("Desea seguir cargando datos? s / n \n");
        fflush(stdin);
        scanf("%c", &i);

        validos++;
    }
    return validos;
}
