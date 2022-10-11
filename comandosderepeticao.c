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

//funcao primos 
int primo(int n){
int i;
for(i=0; i<n; i++){
if(n%i==0)break;
} printf("o numero nao eh primo");
}

//funcao mdc
int mdc(int a,int b){
int m=0,i;
do {
 if(a%i==0 && b%i==0){
m=i;
 } 
i++;
} while (i<=a && i<=b);
return m;
}

//funcao decrescente 
 int decrescente(int n){
 while(n>=0){
 printf("%d",n);
 n--;
   }
 }

//funcao crescente 
int crescente(int n){
 int i;
for(i=0;i<=n;i++){
printf("%d",i);
  }
}

