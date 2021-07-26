#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "harcodeo.h"
#include "notebook.h"

char marca[10][8]=
{
    {"Compaq"},
    {"Asus"},
    {"Acer"},
    {"HP"},
    {"Compaq"},
    {"Asus"},
    {"Acer"},
    {"HP"},
    {"Compaq"},
    {"Asus"},
};

int id[10] = {1,2,3,4,5,6,7,8,9,10};
float precio[10] = {122,135,144,1123,133,1666,1677,121,1131,1313};
char procesador[10][20] =
{
                        {"AMD"},
                        {"nvidia"},
                        {"estrol"},
                        {"vector"},
                        {"aser"},
                        {"ripas"},
                        {"restar"},
                        {"auxon"},
                        {"reasx"},
                        {"virns"}
};

void harcodeo(eNotebook unaNotebook[], int cant)
{
    for(int i = 0; i<cant; i++)
    {
        unaNotebook[i].id = id[i];
        unaNotebook[i].precio = precio[i];
        strcpy(unaNotebook[i].marca, marca[i]);
        strcpy(unaNotebook[i].procesador, procesador[i]);
    }
}
