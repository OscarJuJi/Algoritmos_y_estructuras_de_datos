/* 
* Juarez Jimenez Oscar Antonio
* 1BM1
* Ingenieria en Inteligencia Artificial 
* 17/09/2021 */ 
#include<stdio.h>
#include<stdlib.h>
int main()
{ 
int contador=0;
int opcion=0;

puts("Ingrese el precio del producto importado");
fflush(stdin);
scanf("%i",&opcion);
opcion%2==0?opcion<0?puts("neg"):puts("par"):puts("impar");
//if (precio_del_producto>4000){precio_actual=precio_del_producto*0.16+precio_del_producto;
    //printf("el precio final del producto es:       %1.1f\n",precio_actual);}
    //else if (precio_del_producto<=4000){
      //  precio_actual=precio_del_producto*0.05+precio_del_producto;
        //printf ("el precio final del poducto es:      %1.1f\n",precio_actual);
      
    }
