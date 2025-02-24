/* 
* Juarez Jimenez Oscar Antonio
* 1BM1
* Ingenieria en Inteligencia Artificial 
* 17/09/2021 */
#include<stdio.h>
#include<math.h>
int contador=0;
float variable_x=0.0;
void main()
{puts("Ingrese el valor para la variable x");
scanf("%lf",&variable_x);
if (variable_x<0 && variable_x<=10){
    variable_x=(4/variable_x)-variable_x;
    printf("el resultado de la funcion evaluada en valor dado es: %1.1lf\n",variable_x);}
        else if (variable_x>11 && variable_x<=100){
            variable_x=pow(variable_x,2)-10;
            printf("el resultado de la funcion evaluada en valor dado es: %1.1lf\n",variable_x);}  
                else   if (variable_x>100) {
        printf("el resultado de la funcion evaluada en valor dado es: %1.1lf\n",pow(variable_x,3)*2);}
        else puts("el resultado de la funcion evaluada en valor dado es: 68719476740\n");
}

