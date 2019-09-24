#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "Alumno.h"
#include "Localidad.h"
#include <ctype.h>


void menu(sAlumno listadoAlumnos, int tamAlumnos, sLocalidad listadoLocalidades, int tamLocalidades)
{
    int opcion;

    do
    {
        system("cls");
        printf("=============================================================\n");
        printf("                    A  L  U  M  N  O  S\n");
        printf("\n");
        printf("1) Cargar       2) Modificar        3)Borrar        4)Mostrar\n");
        printf("\n");
        printf("=============================================================\n");
        printf("              L  O  C  A  L  I  D  A  D  E  S\n")
        printf("\n");
        printf("        5) Cargar           6)Modificar         7)Mostrar\n");
        printf("\n");
        printf("=============================================================\n");
        printf("                    F  I  L  T  R  O  S\n");
        printf("\n");
        printf("                       8)Lista de filtros\n");
        printf("\n");
        printf("=============================================================\n");
        printf("\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        case 8:

            break;
        case 9:
            break;
        }

    }
    while(opcion != 9);

}

int getEntero(int* pNum,int reint,char* msg,char* msgError,int maximo,int minimo)
{
    int retorno=-1;
    int aux;

    printf(msg);
    for(; reint > 0; i--)
    {
        scanf("%d", &aux);
        if(isdigit(aux))
        {
            if(aux >= minimo && aux <= maximo)
            {
                pNum=aux;
                retorno=0;
                break;
            }
        }
        else
        {
            printf(msgError);
        }
    }

    return retorno;
}
