#include <stdio.h>

//funcao fatorial 
int fat(int n){
 if(n==0)return 1;
return n*fat(n-1);
}

//funcao fibonnaci
int fib(int n){
 if(n<=2) return 1;
return fib(n-1) + fib(n-2);
}

//funcao mdc
int mdc(int a, int b){
if(b==0) return a;
return mdc(b, a%b);
}

//funcao primo 
int primo(int x, int n){
if(n==1)return 1;
if(x%n==0)return 0;
return primo(x, n-1);
}

//funcao decrescente
int decrescente(int x){
if(x==1)return 1;
printf("%d", x);
return decrescente(x-1);
}

//funcao exp
int expoente(int e,k){
if(k==0)return 1;
return k*expoente(e,k-1);
}

//funcao mmc
int mmc(int a, int b){
return (a*b)/mdc(a,b);
}

//funcao divisoes
int div(int a,int b){
if(a<b)return 0;
return 1+div(a-b,b);
}

//funcao soma digitos
int somadig(int a){
if(a%10==a)return a;
return somadig(a/10)+a%10;
}
