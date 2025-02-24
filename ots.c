#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM1 35
void main(){
int  valores [8];
int organizados[8];
  puts("Ingrese los valores ");
    fflush(stdin);
    scanf("%d", &valores[1]);
    fflush(stdin);
    scanf("%d", &valores[2]);
        fflush(stdin);
    scanf("%d", &valores[3]);
        fflush(stdin);
    scanf("%d", &valores[4]);
        fflush(stdin);
    scanf("%d", &valores[5]);
        fflush(stdin);
    scanf("%d", &valores[6]);
        fflush(stdin);
    scanf("%d", &valores[7]);
        fflush(stdin);
    scanf("%d", &valores[8]);
if (valores[1]%2==0) {organizados[1]=valores[1];}
if (valores[2]%2==0) {organizados[2]=valores[2];}
if (valores[3]%2==0) {organizados[3]=valores[3];}
if (valores[4]%2==0) {organizados[4]=valores[4];}
if (valores[5]%2==0) {organizados[5]=valores[5];}
if (valores[6]%2==0) {organizados[6]=valores[6];}
if (valores[7]%2==0) {organizados[7]=valores[7];}
if (valores[8]%2==0) {organizados[8]=valores[8];}
if (valores[1]%2==1) {organizados[1]=valores[1];}
if (valores[2]%2==1) {organizados[2]=valores[2];}
if (valores[3]%2==1) {organizados[3]=valores[3];}
if (valores[4]%2==1) {organizados[4]=valores[4];}
if (valores[5]%2==1) {organizados[5]=valores[5];}
if (valores[6]%2==1) {organizados[6]=valores[6];}
if (valores[7]%2==1) {organizados[7]=valores[7];}
if (valores[8]%2==1) {organizados[8]=valores[8];}
printf("%d%d%d%d%d%d%d%d",organizados[1],organizados[2],organizados[3],organizados[4],organizados[5],organizados[6],organizados[7],organizados[8]);
}

