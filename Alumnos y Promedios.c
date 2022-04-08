#include <stdio.h>
#include <conio.h>

struct Alumno{
  char Nombre[20];
  int Edad;
  int Promedio;
} Alumno[3];

int main()
{

printf("\t\t\t-MEJORES PROMEDIOS -\n \n");

  for(int i=0; i<3; i++)
    {

  printf("Ingrese el nombre del alumno %d: ", 1+i);
  scanf("%s",&Alumno[i].Nombre);

  printf("\nIngrese la edad del alumno %d: ", 1+i);
  scanf("%d",&Alumno[i].Edad);

  printf("\nIngrese el promedio del alumno %d: ", 1+i);
  scanf("%d",&Alumno[i].Promedio);

  system("CLS");
  printf("\n\n");

  }

  if(Alumno[1].Promedio>Alumno[2].Promedio && Alumno[1].Promedio>Alumno[3].Promedio){
      printf("\nDatos del alumno de mayor promedio:\n%s \n%d \n%d \n\n " , Alumno[1].Nombre, Alumno[1].Edad, Alumno[1].Promedio );
  }
  else if(Alumno[2].Promedio>Alumno[1].Promedio && Alumno[2].Promedio>Alumno[3].Promedio){
      printf("\nDatos del alumno de mayor promedio:\n%s \n%d \n%d \n\n " , Alumno[2].Nombre, Alumno[2].Edad, Alumno[2].Promedio );
  }
  else if(Alumno[3].Promedio>Alumno[1].Promedio && Alumno[3].Promedio>Alumno[2].Promedio){
      printf("\nDatos del alumno de mayor promedio:\n%s \n%d \n%d \n\n " , Alumno[3].Nombre, Alumno[3].Edad, Alumno[3].Promedio );
  }

  getch();
  return 0;
}
