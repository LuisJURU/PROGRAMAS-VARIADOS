//Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y que imprima los datos del empleado con menor y mayor salario.

#include <stdio.h>
#include <stdlib.h>

struct Empleado{
 char nombre[20];
 float salario;
}emp[100];

main () {
    printf("\t\t\t- DATOS DE EMPLEADOS -\n\n");
 int N_Emp,pm=0,pM=0;
 float mayor=0,menor=100.00;

 printf ("Ingrese el numero de Empleados: ");
 scanf ("%d",&N_Emp);
    for(int i=0; i<N_Emp; i++)
        {
    system("CLS");
    printf ("Ingrese el Nombre:");
    scanf ("%s",&emp[i].nombre);

    printf ("Ingrese el Salario:");
    scanf("%f",&emp[i].salario);

        if(emp[i].salario > mayor)
            {
            mayor = emp[i].salario;
            pM=i;
            }
    else
    {

   menor=emp[i].salario;
   pm=i;

    }
  printf ("\n");
        }
        system("CLS");
 printf ("\nDatos del empleado con mejor salario");
 printf ("\nNombre:%s",emp[pM].nombre);
 printf ("\nSalario:%.2f\n",emp[pM].salario);
 printf ("\nDatos del empleado con menor salario:");
 printf ("\nNombre:%s",emp[pm].nombre);
 printf ("\nSalario:%.2f",emp[pm].salario);
}
