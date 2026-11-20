#include <stdio.h>
int calcularFatorial(int numero){
 int resultado=1;
 for(int i=1;i<=numero;i++)resultado=resultado*i;
 return resultado;
}
int main(){
 int numero;
 do{printf("Digite um numero entre 0 e 12: ");scanf("%d",&numero);}
 while(numero<0 || numero>12);
 printf("%d! = %d\n",numero,calcularFatorial(numero));
 return 0;
}
