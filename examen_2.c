#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
    char cadena_1[10];
    char cadena_2[10];
    char cadenafinal[12]={};
    strcpy(cadena_1,"felipiento");
    strcpy(cadena_2,"agripino");
    int i=0;
    int k=0;
    int j=1;
    while (i<11)
    {  
    cadenafinal[k]=cadena_1[i];k+=2; 
     cadenafinal[j]=cadena_2[i]; 
     j+=2;
     i++;
    }
    printf("La combinacion resulta %s",cadenafinal);    
}
