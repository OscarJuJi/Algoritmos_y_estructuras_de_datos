/* 
* Juarez Jimenez Oscar Antonio
* 1BM1
* Ingenieria en Inteligencia Artificial 
* 27/08/2021 */ 

#include<math.h>
#include<stdio.h>
int A,B,C,D,nmax,Positivo=1;
    signed int Negativo= -1;
    void main(){
    printf ("s");
    scanf("%d", &nmax);
    for (int i=1; i<=nmax; i++)
    {
        A=2*pow(i,3);
        printf("  %d",A);
    }

    printf ("\n\nIntroduzca el numero hasta el que quiere llegar:  ");
    scanf("%d", &nmax);
    for (int i=1; i<=nmax; i++)
    {
        B=(pow(i,3) + pow(i,2) + 2);
        printf("  %d",B);
    }

    printf ("\n\nIntroduzca el numero hasta el que quiere llegar: \n\n  ");
    scanf("%d",&nmax);
    for(int i=1; i<=nmax; i++)
    {
        C=25*pow(i,2);
        printf("  %d",C);
    }

    printf ("\n\nIntroduzca el numero hasta el que quiere llegar: \n\n  ");
    scanf("%d", &nmax);
    for (int i=1; i<=nmax; i++)
    {
        printf("  %d  %d",Positivo,Negativo);
        Positivo++;
        Negativo--;
        i++;
    }}