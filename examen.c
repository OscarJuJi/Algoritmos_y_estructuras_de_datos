/*
* Juarez Jimenez Oscar Antonio
* 1BM1
* Ingenieria en Inteligencia Artificial 
* 08/10/2021
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM1 35
void main(){
    typedef struct{ int alto;
int ancho;
int largo;
char color_De_pelo[TAM1];
int edad;
}catracteristicas_fisicas;
typedef struct{ char color [TAM1];
char material[TAM1];
char modelo[TAM1];
int peso;
int valor; }vestiduras;
    typedef struct{ char nombre [TAM1];
catracteristicas_fisicas fisico;
vestiduras lavestidura;}personaje;
personaje arreglo_de_personajes[TAM1];
int opcion_usuario;
int opcion_usuario_2;
   puts("Ingrese a continuacion la opcion que desea 1-parra ingresar personajes y 2-para imprimirlas caracteristicas del personajes)");
       fflush(stdin);
    scanf("%d", &opcion_usuario);
    if (opcion_usuario==1){
    puts("Ingrese el numero de personajes que desea hacer");
    fflush(stdin);
    scanf("%d", &opcion_usuario_2);
    for (int i = 0; i < opcion_usuario_2; i++)
    {  
    puts("Ingrese el nombre del personaje");
    fflush(stdin);
    scanf("%32[a-zA-Z .,1-9<>/;':~_+-=*|]", &arreglo_de_personajes[i].nombre);
    puts("Ingrese el ancho del fisico");
    fflush(stdin);
    scanf("%d", &arreglo_de_personajes[i].fisico.ancho);
    puts("Ingrese el largo del fisco");
    fflush(stdin);
    scanf("%d", &arreglo_de_personajes[i].fisico.largo);
    puts("Ingrese el alto del fisico");
    fflush(stdin);
    scanf("%d", &arreglo_de_personajes[i].fisico.alto);
    puts("Ingrese la edad del personaje");
    fflush(stdin);
    scanf("%d", &arreglo_de_personajes[i].fisico.edad);
    puts("Ingrese el color de pelo");
    fflush(stdin);
    scanf("%20[a-zA-Z .,1-9<>/;':~_+-=*|]", &arreglo_de_personajes[i].fisico.color_De_pelo);
    puts("Ingrese el color de la vestidura");
    fflush(stdin);
    scanf("%20[a-zA-Z .,1-9<>/;':~_+-=*|]", &arreglo_de_personajes[i].lavestidura.color);
    puts("Ingrese el modelo de la vetidura");
    fflush(stdin);
    scanf("%20[a-zA-Z .,1-9<>/;':~_+-=*|]", &arreglo_de_personajes[i].lavestidura.modelo);
    puts("Ingrese el material de la vestoidura");
    fflush(stdin);
    scanf("%20[a-zA-Z .,1-9<>/;':~_+-=*|]", &arreglo_de_personajes[i].lavestidura.material);
    puts("Ingrese el peso de la vestoidura");
    fflush(stdin);
    scanf("%d", &arreglo_de_personajes[i].lavestidura.peso);
    puts("Ingrese el valor de la vestidura");
    fflush(stdin);
    scanf("%d", &arreglo_de_personajes[i].lavestidura.valor);
    }}else if (opcion_usuario=2){for (int j = 0; j < opcion_usuario_2; j++){
        personaje*apuntador=&arreglo_de_personajes[j];
printf("Confirmando los datos que ingreso de su personaje: \n %d es el numero de personaje, %s es el nombre, %d es el alto, %d es el anacho, %d es el largo,  %d es la edad, %s es el color de pelo, %s es el color de la vestiduar, %s es el modelo de la vestiduar, %s es el material de al vestidura, %d es el peso de la vestidura, %d es el valor de ala vestidura. \n",j,apuntador->nombre, apuntador->fisico.alto,apuntador->fisico.ancho, apuntador->fisico.largo, apuntador->fisico.edad,apuntador->fisico.color_De_pelo, apuntador->lavestidura.color,apuntador->lavestidura.modelo,apuntador->lavestidura.material,apuntador->lavestidura.peso,apuntador->lavestidura.valor);
    }} else puts("opcion no valida");
}