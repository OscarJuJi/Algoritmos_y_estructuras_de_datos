/* 
* Juarez Jimenez Oscar Antonio
* 1BM1
* Ingenieria en Inteligencia Artificial 
* 03/09/2021 */ 
#include <stdio.h>
int main(){
long long int distanciasol_a_luna=14998400000000,distancia_tierra_a_sol=14960000000000,metro=1000,centimetro=100;//La distancia que hay entre el Sol y la Luna es variable, y oscila entre 149.984x10⁶ km No existe una distancia constante entre el Sol y la Luna porque al ser la Luna un satélite de la Tierra su posición respecto al Sol va a depender del periodo de traslación de la Tierra.*/
    long long int valordelasuma;
     valordelasuma=distancia_tierra_a_sol+distancia_tierra_a_sol;
        printf("\nLa suma de la distancia de la luna al sol con la distancia del tierra al sol es \n%lld en centimetrosmetros",valordelasuma);
        valordelasuma=valordelasuma/centimetro;
        printf("\nLa suma de la distancia de la luna al sol con la distancia del tierra al sol es \n%lld en metros",valordelasuma);
        valordelasuma=valordelasuma/metro;
        printf("\nLa suma de la distancia de la luna al sol con la distancia del tierra al sol es \n%lli en kilometros",valordelasuma);
    return 0;
    }