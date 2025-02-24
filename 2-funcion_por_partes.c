/* 
* Juarez Jimenez Oscar Antonio
* 1BM1
* Ingenieria en Inteligencia Artificial 
* 17/09/2021 */
#include<stdio.h>
#include<math.h>
void main()
{ 
int contador=0;
double variable_z=0.0;

    do{
puts("Ingrese el valor para la variable z");
scanf("%lf",&variable_z);
if (variable_z<0) {variable_z=0;
    printf("el resultado de la funcion evaluada en valor dado es: %1.1lf\n",variable_z);}
else    if (variable_z<=9&&variable_z>=0){
            variable_z=(1/variable_z)-(variable_z/2);
            printf("el resultado de la funcion evaluada en valor dado es: %1.1lf\n",variable_z);} 
                else if (variable_z>9&&variable_z<125){variable_z=pow(variable_z, 3)+pow(variable_z, 5)+pow(variable_z, 9); 
                    printf("el resultado de la funcion evaluada en valor dado es: %1.1lf\n",variable_z);} 
                     else   if (variable_z>=125) {
        printf("el resultado de la funcion evaluada en valor dado es: %1.1lf\n",(variable_z)/=3);}
contador++;
} while (contador<=4);
}

