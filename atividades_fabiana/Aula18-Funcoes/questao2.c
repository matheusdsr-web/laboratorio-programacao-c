#include <stdio.h>
float maiorPreco(float a,float b){if(a>b)return a;else return b;}
int main(){
 float preco1,preco2;
 printf("Digite o preco do primeiro produto: ");scanf("%f",&preco1);
 printf("Digite o preco do segundo produto: ");scanf("%f",&preco2);
 if(preco1==preco2)printf("Os precos sao iguais.\n");
 else printf("Maior preco: R$ %.2f\n",maiorPreco(preco1,preco2));
 return 0;
}
