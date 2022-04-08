/*hacer un arreglo de estructuras llamada atleta para N para atletas, que contenga los siguientes
campos:

1- Nombre
2- Pais
3- Medallas

Y devuelva los datos (Nombre y país) del atleta que ha ganado mayo numero de medallas*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

int n, Pmayor=0, Pmenor=0, max=0, min=10000000;

struct Atletas{
char nombre[20];
char pais [20];
int medallas;
}Atletas[100000];

int main()
{
printf("\t\t\t- MAYOR NUMERO DE MEDALLAS -\n\n");
printf("Numero de atletas: ");

scanf("%d", &n);

for(int i=1;i<=n; i++){

    system("CLS");

    printf("Nombre: ", i);
    scanf("%s", &Atletas[i].nombre);

    printf("Pais: ");
    scanf("%s", &Atletas[i].pais);

    printf("Numero de Medallas: ");
    scanf("%d", &Atletas[i].medallas);

    printf("\n");

    if(Atletas[i].medallas>max)
    {
    max=Atletas[i].medallas;
    Pmayor=i;

    }

    else
    {
    min=Atletas[i].medallas;
    Pmenor=i;

    }

}
system("CLS");
printf("\t\t\t- RESULTADOS -\n\n");
printf("Nombre: %s \n", Atletas[Pmayor].nombre);
printf("Pais: %s \n", Atletas[Pmayor].pais);

system("PAUSE");
return 0;

}
