/*Hacer una estructura llamada corredor, en la cual se tendr�n los siguientes campos: Nombre, Edad,
sexo, club, pedir datos al usuario para un corredor y as� una categor�a de competici�n:

1- Juvenil <= 18 a�os
2- Se�or <= 40 a�os
3- Veterano > 40 a�os
*/


#include <stdio.h>
#include <stdlib.h>


struct Corredor{
char Nombre[30];
char Edad[20];
char Sexo [20];
char Club [30];
char Categoria [20];
}competidor[1];

int main()
{
    printf("\t\t\t- CAMPEONATE DE ATLETISMO -\n");
    for(int i=0; i<1; i++)
    {

        printf("\nIngrese el Nombre del competidor #%d: ", i+1);
        gets(competidor[i].Nombre);

        printf("\nIngrese la Categoria a competir\n", i+1);
        printf("1- Juvenil <= 18 a�os\n");
        printf("2- Se�or <= 40 a�os\n");
        printf("3- Veterano > 40 a�os\n: ");
        gets(competidor[i].Categoria);

        printf("\nIngrese la Edad del competidor #%d: ", i+1);
        gets(competidor[i].Edad);

        printf("\nIngrese el Sexo del competidor #%d: ", i+1);
        gets(competidor[i].Sexo);

        printf("\nIngrese el Club del competidor #%d: ", i+1);
        gets(competidor[i].Club);

        printf("\n");
        system("CLS");
    }

    for(int i=0; i<1; i++)
    {
        printf("\nDatos del Competidor: #%d", i+1);
        printf("\nNombre: %s", competidor[i].Nombre);
        printf("\nCategoria: %s", competidor[i].Categoria);
        printf("\nEdad: %s", competidor[i].Edad);
        printf("\nSexo: %s", competidor[i].Sexo);
        printf("\nClub: %s\n", competidor[i].Club);

    }


system ("PAUSE");
return 0;
}
