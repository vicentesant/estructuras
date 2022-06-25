/******************************************************************************


1) Declare una estructura para almacenar datos de estudiantes 
(DNI y dos notas correspondientes a los dos cuatrimestres del año).
Haga un programa que permita ingresar los datos de 5 estudiantes en un vector de estas estructuras.
Luego de ingresar los datos se deben mostrar los DNI de cada estudiante y el promedio que tiene en sus exámenes.

*******************************************************************************/
#include <stdio.h>
//se declaran las estructuras
typedef struct alumnos
{  int dni[5];
float nota1[5],nota2[5];
} alumn;
int main(){
alumn a1;
int  i;
printf("\n Ingresar datos de los alumnos\n");//se ingresan los datos de cada alumno.
for (i=0 ; i<=4 ; i++){
printf("dni:"); scanf("%d",&a1.dni[i]);
printf("Primera nota: "); scanf("%f",&a1.nota1[i]);
printf("Segunda nota:"); scanf("%f", &a1.nota2[i]);

}
printf("\n DATOS DE los alumnos\n"); //se muestra le al usuario los datos ingresados por cada alumno mas el promedio.
for (i=0 ; i<=4 ; i++){
printf("Alumno %d\n",i);
printf("DNI:%d\n",a1.dni[i]);
printf("Promedio:%f\n",(a1.nota1[i]+a1.nota2[i])/2);
}
}