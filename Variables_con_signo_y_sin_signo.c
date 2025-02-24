/* 
* Juarez Jimenez Oscar Antonio
* 1BM1
* Ingenieria en Inteligencia Artificial 
* 03/09/2021 */ 
#include <stdio.h>
int main(){
unsigned long long int variable1,variable2;
    signed long long int variable1_1,variable2_2;
    variable1=456;
        variable1_1=-456;
         variable2=77777999999;
            variable2_2=100000000000000;
             const double variable3 = -1E56;
                const double variable4 = -6E-79;
                    const long variable5 = 333333333333;
                        const float variable6 = 6777.56f;
                            const float variable7 = 55E-2;
                                const float variable8 = -0.55f;
                                        const double variable9 = -0.0000000000005;
        printf("\nEl valor sin signo de 456 es\n%u ",variable1);
        printf("\nEl valor con signo de 456 es\n%i ",variable1);
        printf("\nEl valor sin signo de -456 es\n%u ",variable1_1);
        printf("\nEl valor con signo de -456 es\n%i ",variable1_1);
        printf("\nEl valor sin signo de 77777999999 es\n%llo ",variable2);
        printf("\nEl valor con signo de 77777999999 es\n%lli ",variable2);
        printf("\nEl valor sin signo de 100000000000000 es\n%llo ",variable2_2);
        printf("\nEl valor con signo de 100000000000000 es\n%lli ",variable2_2);
        printf("\nEl valor con signo de -1x10^56 es\n%d%6.3e ",variable3);
        printf("\nEl valor sin signo de -1x10^56 es\n%u%6.3e ",variable3);
        printf("\nEl valor sin signo de -6x10^-79 es\n%u%6.3e ",variable4);
        printf("\nEl valor con signo de -6x10^-79 es\n%6.3e ",variable4);
        printf("\nEl valor sin signo de 333333333333 es\n%u ",variable5);
        printf("\nEl valor con signo de 333333333333 es\n%li ",variable5);
        printf("\nEl valor sin signo de  6777.56 es\n%u ",variable6);
        printf("\nEl valor con signo de  6777.56 es\n%i ",variable6);
        printf("\nEl valor sin signo de  55^-2 es\n%u ",variable7);
        printf("\nEl valor con signo de  55^-2 es\n%lf ",variable7);
        printf("\nEl valor sin signo de  -0.55 es\n%u ",variable8);
        printf("\nEl valor con signo de  -0.55 es\n%lf ",variable8);
        printf("\nEl valor sin signo de  -0.0000000000005 es\n%u ",variable9);
        printf("\nEl valor con signo de  -0.0000000000005 es\n%6.3e ",variable9);
    return 0;
}