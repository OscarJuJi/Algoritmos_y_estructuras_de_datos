/* 
* Juarez Jimenez Oscar Antonio
* 1BM1
* Ingenieria en Inteligencia Artificial 
* 17/09/2021 */ 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{ 
long double opcion=0;
int copia;
puts("Ingrese el valor de la serie");
fflush(stdin);
scanf("%llf",&opcion);
copia=opcion*4; copia=copia/0.25;copia=copia%2; printf("%ld",copia); if (copia==0)
{
opcion<=100 && opcion>=0?opcion>=(-100/pow(2,-100)) && opcion<=(100/pow(2,100))?puts("serie A E n/2^n con inicio en n=-100 hasta 100"):puts("SerieB E con resultado inicio en 0 hasta 25"):puts("ninguna serie");
printf("%llf",opcion);
if(opcion==0){puts("serie A E n/2^n con inico ien n=-100 hasta 100 y 0SerieB E con resultado inicio en 0 hasta 25");}
}}


