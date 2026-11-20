#include <stdio.h>
void exibirMenu(){printf("\n--- CALCULADORA ---\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n");}
float somar(float a,float b){return a+b;}
float subtrair(float a,float b){return a-b;}
float multiplicar(float a,float b){return a*b;}
float dividir(float a,float b){return a/b;}
int main(){
 int opcao; float n1,n2;
 do{
  exibirMenu(); printf("Escolha uma opcao: "); scanf("%d",&opcao);
  if(opcao>=1 && opcao<=4){printf("Digite o primeiro numero: ");scanf("%f",&n1);printf("Digite o segundo numero: ");scanf("%f",&n2);}
  switch(opcao){
   case 1: printf("Resultado: %.2f\n",somar(n1,n2)); break;
   case 2: printf("Resultado: %.2f\n",subtrair(n1,n2)); break;
   case 3: printf("Resultado: %.2f\n",multiplicar(n1,n2)); break;
   case 4: if(n2==0) printf("Erro: divisao por zero!\n"); else printf("Resultado: %.2f\n",dividir(n1,n2)); break;
   case 0: printf("Encerrando calculadora...\n"); break;
   default: printf("Opcao invalida!\n");
  }
 }while(opcao!=0);
 return 0;
}
