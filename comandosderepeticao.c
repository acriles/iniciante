#include <stdio.h>

//funcao soma de digitos
int soma (int a){
int x=0;
 do {
 x+= a%10;
 a=a/10;
 } while (a!=0);
return x;
}

