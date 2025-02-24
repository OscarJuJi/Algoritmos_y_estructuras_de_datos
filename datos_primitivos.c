/* 
* Juarez Jimenez Oscar Antonio
* 1BM1
* Ingenieria en Inteligencia Artificial 
* 03/09/2021 */ 
#include <stdio.h>
int main(){
    char maxc=255;
    unsigned char maxcu=255;
    printf("\nEl valor con signo de char es\n%d ",maxc);
    printf("\nEl valor sin signo de char es\n%d",maxcu);
    int maxi=2147483648*2;
    unsigned int maxiu=2147483648*2;
    printf("\nEl valor con signo de int es\n%d ",--maxi);
    printf("\nEl valor sin signo de int es\n%u",--maxiu);
    long maxl=2147483648*2;
    unsigned long maxlu=2147483648*2;
    printf("\nEl valor con signo de long es\n%d ",--maxl);
    printf("\nEl valor sin signo de long es\n%u",--maxlu);
    double maxd=9223372036854775808*2;
    double maxdu=9223372036854775808*2;
    printf("\nEl valor con signo de double es\n%lld",--maxd);
    printf("\nEl valor sin signo de double es\n%1.0f",--maxdu);
    unsigned maxun=2147483648*2;
    unsigned maxuun=2147483648*2;
    printf("\nEl valor con signo de unsigned es\n%d ",--maxun);
    printf("\nEl valor sin signo de unsigned es\n%u",--maxuun);
    return 0;
    float maxf=2147483648*2;
    unsigned maxuf=2147483648*2;
    printf("\nEl valor con signo de float es\n%d ",--maxf);
    printf("\nEl valor sin signo de float es\n%u",--maxuf);
    return 0;
}