/* 
* Juarez Jimenez Oscar Antonio
* 1BM1
* Ingenieria en Inteligencia Artificial 
* 03/09/2021 */ 
#include <stdio.h>
#include <math.h>
 
int main(){
    float area;
    float pi=3.14;
    float radio;
    long long int distanciasol_a_luna=14998400000000,distancia_tierra_a_sol=14960000000000,metro=1000,centimetro=100;/*La distancia que hay entre el Sol y la Luna es variable, y oscila entre 149.984x10⁶ km No existe una distancia constante entre el Sol y la Luna porque al ser la Luna un satélite de la Tierra su posición respecto al Sol va a depender del periodo de traslación de la Tierra.*/
    unsigned long long int variable1,variable2;
    signed long long int variable1_1,variable2_2;
    putchar('B');
    putchar('i');
    putchar('e');
    putchar('n');
    putchar('v');
    putchar('e');
    putchar('n');
    putchar('i');
    putchar('d');
    putchar('o');
    putchar(' ');
    putchar('a');
    putchar('l');
    putchar(' ');
    putchar('I');
    putchar('P');
    putchar('N');
    putchar('-');
    putchar('E');putchar('S');putchar('C');putchar('O');putchar('M');
    printf("\n Si el area del circulo es 77.8\n");
    area=77.8;
    radio=sqrt(area/pi);
        printf("\nEl radio es \n%f", radio);
        float elvalordelaraiz=995991.9277;
    printf("\nLa parte entera de la raiz cuadrada de 99199919991 es \n%1.0f",elvalordelaraiz);
        long long int valordelasuma;
        valordelasuma=distancia_tierra_a_sol+distancia_tierra_a_sol;
        printf("\nLa suma de la distancia de la luna al sol con la distancia del tierra al sol es \n%lld en centimetrosmetros",valordelasuma);
        valordelasuma=valordelasuma/centimetro;
        printf("\nLa suma de la distancia de la luna al sol con la distancia del tierra al sol es \n%lld en metros",valordelasuma);
        valordelasuma=valordelasuma/metro;
        printf("\nLa suma de la distancia de la luna al sol con la distancia del tierra al sol es \n%lli en kilometros",valordelasuma);
        variable1=456;
        variable1_1=-456;
         variable2=77777999999;
         variable2_2=100000000000000;
        printf("\nEl valor sin signo de 456 es\n%u ",variable1);
        printf("\nEl valor con signo de 456 es\n%i ",variable1);
        printf("\nEl valor sin signo de -456 es\n%u ",variable1_1);
        printf("\nEl valor con signo de -456 es\n%i ",variable1_1);
        printf("\nEl valor sin signo de 77777999999 es\n%llo ",variable2);
        printf("\nEl valor con signo de 77777999999 es\n%lli ",variable2);
        printf("\nEl valor sin signo de 100000000000000 es\n%llo ",variable2_2);
        printf("\nEl valor con signo de 100000000000000 es\n%lli ",variable2_2);
        
    return 0;
}