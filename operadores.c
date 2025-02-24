/* 
* Juarez Jimenez Oscar Antonio
* 1BM1
* Ingenieria en Inteligencia Artificial 
* 03/09/2021 */ 
#include <stdio.h>
int main(){
int val1=(75);
int val2=(1024);
int val3=(512);
int val4=(65556);
int val5=(144);
float val6=(5.1);
float val7=(7.7);
int val8=(7891);
int val9=(89);
char val10=(175);
float ext=(0.07);
val1+=23;
  printf("\n75--------->%c",val1);
  printf("\n1024--------->%d",val2>>5);
  printf("\n512--------->%d",val3<<2);
  printf("\n65556--------->%d",val4%65555);
  printf("\n144--------->%d",val5-132);
  printf("\n5.1--------->%1.1f",val6*5);
  printf("\n7.7--------->%1.2f",val7+ext);
  printf("\n7891--------->%d",val8/7891);
  printf("\n89--------->%d",++val9);
  printf("\n4--------->%c",val10);
return 0;
}