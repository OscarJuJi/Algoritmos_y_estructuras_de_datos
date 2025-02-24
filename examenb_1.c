/* 
* Juarez Jimenez Oscar Antonio
* 1BM1
* Ingenieria en Inteligencia Artificial 
* 17/09/2021 */
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int serie1, var;
int contador, El_nuemro_del_usuario;
int Npositivo=1;
signed int Nnegativo=-1;
void main(){ 
puts("Ingrese el numero de elementos de cada serie sen las series \n 1:2,16,54,128..\n2:4,14,38,82...\n3:25,100,225,400,625...\n4:1,-1,2,-2,3,-3... ");
puts("Ingrese el numero de elementos de las serie 1\n");
scanf("%d", &serie1);
   for(contador=0;contador<=serie1;contador++)
        {
        var++;
        El_nuemro_del_usuario=(pow(var,3));
    printf(" %ld ", El_nuemro_del_usuario*2);
    }
    printf ("\n\nIntroduzca el numero hasta el que quiere llegar en la serie 3: \n\n  ");
    scanf("%d",&serie1);
    for(int contador=1; contador<=serie1; contador++)
    {int variable;
        variable=25*pow(contador,2);
        printf("  %d",variable);
    }
