/* 
* Juarez Jimenez Oscar Antonio
* 1BM1
* Ingenieria en Inteligencia Artificial 
* 17/09/2021 */
#include<stdio.h>
#include<math.h>
void main()
{ 
int contador=1;
int long long El_nuemro_del_usuario;
long long int factorial=1;
while (El_nuemro_del_usuario!=0)
{puts("Ingrese el numero del del que desea saber su factorial");
scanf("%d",&El_nuemro_del_usuario);
if ( El_nuemro_del_usuario<0){
    El_nuemro_del_usuario=El_nuemro_del_usuario*(-1);
    printf("el valor absolotu de del nuemro es%lld",El_nuemro_del_usuario);
}
printf("el factroial del numero %d es %ld\n",El_nuemro_del_usuario,factorial);
       if (El_nuemro_del_usuario<0){printf("el valor es negativo\n"); }
    else 
for(contador=1;contador<=El_nuemro_del_usuario;contador++)
        {
        factorial=contador*factorial;
        }
    printf("el factroial del numero %d es %u%ld\n",El_nuemro_del_usuario,factorial);
    factorial=factorial-(factorial-1);
}
}
