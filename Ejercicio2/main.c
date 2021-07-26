#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*2. Crear una función que se llame reemplazarCaracter que reciba una cadena
de caracteres como primer parámetro, como segundo parámetro el carácter a
reemplazar y como tercero el nuevo carácter y devuelva la cantidad de veces
que se reemplazo el carácter.int reemplazarCaracter(char [], char, char);*/

int reemplazarCaracter(char [], char, char);

int main()
{
    char cadena[20] = {"Agustin"};
    char caracterR = 's';
    char nuevoCaracter = 'W';
    int cantidad;
    cantidad = reemplazarCaracter(cadena, caracterR, nuevoCaracter);
    printf("La cantidad es %d", cantidad);

    return 0;
}

int reemplazarCaracter(char cad[], char carR, char nuevoC)
{
    int tam;
    int cant = 0;
    tam = strlen(cad);

    for(int i=0; i < tam-1; i++)
    {
        if(cad[i] == 's')
        {
            cad[i] = nuevoC;
            cant++;
        }
    }
    return cant;
}
