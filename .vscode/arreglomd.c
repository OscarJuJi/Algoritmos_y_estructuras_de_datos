/* 
* Juarez Jimenez Oscar Antonio
* 1BM1
* Ingenieria en Inteligencia Artificial 
* 17/09/2021 */ 
#include<stdio.h>
#define Tam 13;
int i,j,k;
void main()
{ 
int matriz1[2][2]={{8,12},{6,0}};
int matriz2[2][2][2]={ {{0,1},{2,3}} ,{{4,5},{5,6}}};
int arreglo[3]={2,4,6};
for ( i = 0; i <= 2; i++)
{
    printf("el valor del arreglo pos%d es %d\n",i,arreglo[i]/2);
}
for ( i = 0; i < 2; i++)
{for ( j = 0; j < 2; j++)
{
     printf("el valor del arreglo pos%d,%d es %d\n",i,j,matriz1[i][j]);
}
}
for ( i = 0; i < 2; i++)
{for ( j = 0; j < 2; j++)
{for (k = 0; k < 2; k++)
{
     printf("el valor del arreglo pos%d,%d,%d es %d\n",i,j,k,matriz2[i][j][k]);
}
}}}
