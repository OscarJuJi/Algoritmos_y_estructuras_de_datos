#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
int contador=0;
int opcionUsuario=0;
int valorUsuarioEvaluacion=0;
double raizCuadrada=0.0;
do{
puts("Seleccione una opción:");
puts("1.-Ejecutar un contador de 0 a 1000");
puts("2.-Ejecutar un contador de 1000 a 0, de 2 en 2");
puts("3.-Evaluar numeros pares positivos e imprimir el doble del valor");
puts("4.-Obtener raiz cuadrada de todo valor impar entre 100 y 200");
puts("5.-Salir del programa");
fflush(stdin);
scanf("%d",&opcionUsuario);
switch(opcionUsuario){
case 1: 
contador =0;
while (contador<=1000){
    printf ("cosa");
    contador++;
}
break;
case 2:
for(contador=1000;contador>=0;contador-=2) {
    printf ("cosa");
}
break;
case 3:
    puts ("algo");
    fflush(stdin);
    scanf("%d",&valorUsuarioEvaluacion);
    if(valorUsuarioEvaluacion%2==0&&valorUsuarioEvaluacion>=0){
        printf("mas cossas:%D\n",2*valorUsuarioEvaluacion);
    }else  {puts("jsdfjhsdfdsnk%D\n");}
    break;
case 4:
for(contador=100; contador<=200; contador++){
    if(contador%2!=0)
        printf("La raiz de %d es: %1.3f\n",contador, sqrt(contador));
}
        break;
default:
    puts("Nada que hacer");
    exit(0); 
    break;
}} while (1);}
