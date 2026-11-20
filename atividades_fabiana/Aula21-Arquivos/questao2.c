#include <stdio.h>
int main(){
 FILE *arquivo; int numero;
 arquivo=fopen("numeros.txt","w");
 if(arquivo==NULL){printf("Erro ao abrir arquivo!\n");return 1;}
 for(int i=0;i<5;i++){printf("Digite um numero inteiro: ");scanf("%d",&numero);fprintf(arquivo,"%d\n",numero);}
 fclose(arquivo);
 arquivo=fopen("numeros.txt","r");
 if(arquivo==NULL){printf("Erro ao ler arquivo!\n");return 1;}
 printf("\nNumeros armazenados:\n");
 while(fscanf(arquivo,"%d",&numero)==1)printf("%d\n",numero);
 fclose(arquivo);return 0;
}
