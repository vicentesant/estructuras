/******************************************************************************



2) Una aerolinea tiene vuelos, los cuales poseen un código alfanumérico (ejemplo: AR1500), 
una ciudad de origen y una ciudad de destino. Ingrese 4 vuelos en un vector.
Luego de ingresados los datos permita que el usuario escriba el nombre de una ciudad 
y muestre los vuelos que parten y los que arriban a esa ciudad. 
Si no hubiera vuelos para la ciudad ingresada debe mostrarse un mensaje de error.
*******************************************************************************/
#include <string.h>
//se declaran estructuras.
typedef struct aereolinia
{  char vuelos[50];
   char destino[50],origen[50];
} aereolinia;
int main(){
aereolinia a[4] ;
int  i,c=0,b=0;
char busqueda[50];
printf("\n Ingresar datos de los vuelos\n");//se ingrasan los datos de los vuelos.
for (i=0 ; i<=3 ; i++){
printf ("\n Introduce codigo del vuelo:"); gets(a[i].vuelos);
printf("\n Introducir ciudad del destino del vuelo: "); gets(a[i].destino);
printf("\n Introducir ciudad del origen del vuelo:"); gets(a[i].origen);


}
printf ("\n Introducir nombre del destino deseado:"); gets(busqueda);//se ingrasa el nombre del destino deseado para luego buscar si se encuentra entre las otras ciudades.

for (i=0 ; i<=3 ; i++){
    if(strcmp(busqueda,a[i].origen)==0){//se comparan el destino deseado con los vuelos de origen para ver si algun vuelo coincide y avisar al usuario.
    c=c+1;
      printf (" Vuelos que arriban: %s\n", a[i].vuelos);
}

}
for (i=0 ; i<=3 ; i++){
    if(strcmp(busqueda,a[i].destino)==0){//se comparan el destino deseado con los vuelos que parten para ver si algun vuelo coincide y avisar al usuario.
    b=b+1;
    printf (" Vuelos que parten: %s\n", a[i].vuelos);

    
}

}
if(c+b==0)
{printf ("\n No hay vuelos para el destino deseado");}//al no haber vuelos se le avisa al usuario que no hay.

}