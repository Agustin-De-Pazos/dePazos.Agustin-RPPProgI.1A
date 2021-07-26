#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "notebook.h"
#include "harcodeo.h"
/*3. Dada la estructura Notebook(id, procesador, marca,
precio) generar una función que permita ordenar
 un array de dicha estructura por marca.
 Ante igualdad de marca deberá ordenarse por precio.
 Hardcodear datos y mostrarlos desde el main. */
void ordenarEmpleados(eNotebook lista[], int tam);

int main()
{
    eNotebook unaNotebook[10];
    harcodeo(unaNotebook, 10);
    ordenarEmpleados(unaNotebook, 10);
    printf("id       procesador        marca     precio\n");
    for(int i = 0; i<10; i++)
    {
        printf("%d     %10s       %10s       %.2f \n", unaNotebook[i].id, unaNotebook[i].procesador, unaNotebook[i].marca, unaNotebook[i].precio);
    }
    return 0;
}


void ordenarEmpleados(eNotebook lista[], int tam)
{
    eNotebook auxEmpleado;
    for(int i=0; i < tam -1; i++)
    {
        for(int j= i+1; j < tam; j++)
        {

            if(strcmp(lista[i].marca, lista[j].marca) > 0)
            {
                auxEmpleado = lista[i];
                lista[i] = lista[j];
                lista[j]= auxEmpleado;
            }
            else if(strcmp(lista[i].marca,lista[j].marca) == 0 && lista[i].precio > lista[j].precio)

            {
                auxEmpleado = lista[i];
                lista[i] = lista[j];
                lista[j]= auxEmpleado;
            }
        }
    }
}
