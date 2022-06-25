/******************************************************************************

3) Utilice el ejercicio 1, modificándolo para que las notas del estudiante estén en un vector de notas 
dentro de la estructura. Este vector de notas puede almacenar hasta 10 notas del alumno. 
Los lugares no utilizados se escriben con un valor -1 para indicar que ese lugar está vacío.
De esta manera, un estudiante puede haber rendido 2 exámenes, otro 4 y otro 10, para citar algunos ejemplos. 
Se pide conservar la funcionalidad del programa teniendo en cuenta esta nueva organización de la información. 
Por lo tanto, para mostrar el promedio del estudiante, 
habrá que considerar las notas que tiene en este vector de notas,
teniendo cuidado en utilizar solamente las notas que existan y omitiendo los -1 que pueda haber.

*******************************************************************************/
#include <stdio.h>
//se declaran las estructuras.
typedef struct alumnos

{  

int dni,cantidad;
float notas[10];

    
} alumn;

int main(){

alumn a1[5];
int  i,x;
float promedio=0,acum=0;

printf("\n Ingresar datos de los alumnos\n");//se pide ingresar el dni y la cantidad de notas.
for (i=0 ; i<=4 ; i++){
printf("\nIngresar dni del Alumno:\n"); scanf("%d",&a1[i].dni);
printf("Ingresar cantidad de notas del alumno:"); scanf("%d",&a1[i].cantidad);
}

for (i=0 ; i<=4 ; i++){
  printf("\nIngresar notas del alumno %d\n",i);//se ingresan las notas de cada alumno.
    for (x=0 ; x<=9 ; x++){
        if(x<a1[i].cantidad)
        {
            scanf("%f",&a1[i].notas[x]);
        }
        else
        {
           a1[i].notas[x]=-1; 
        }
    }

}

    for(i=0; i<5; i++)  //se saca el promedio de cada alumno.
	{
        for(x=0; x<a1[i].cantidad; x++)
        {
            acum += a1[i].notas[x];
        }
        
        if(a1[i].cantidad == 0) 
        {
            promedio = 0;
        }
        else
        {
            promedio =  acum/a1[i].cantidad;
        }

        printf("D.N.I.: %d\tPromedio: %f\n", a1[i].dni, promedio); 
        }
    return 0;
}

