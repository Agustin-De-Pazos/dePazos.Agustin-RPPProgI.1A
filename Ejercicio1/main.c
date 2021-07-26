#include <stdio.h>
#include <stdlib.h>
/*1. Crear una función llamada calcularIVA
que reciba como parámetro el precio bruto
de un producto y devuelva el valor del impuesto
(el IVA es 21%).Realizar la llamada desde main.*/

int calcularIva(float precioBruto);

int main()
{
    float precio = 100;
    float ValorImpuesto;
    ValorImpuesto = calcularIva(precio);
    printf("El valor del impuesto es %.2f", ValorImpuesto);
    return 0;
}

int calcularIva(float precioBruto)
{
    int impuesto;
    impuesto = precioBruto * 21 / 100;

    return impuesto;
}
