#include <stdio.h>
int main(){
 FILE *arquivo; char nome[50]; int matricula;
 arquivo=fopen("funcionarios.txt","w");
 if(arquivo==NULL){printf("Erro ao abrir arquivo!\n");return 1;}
 for(int i=0;i<5;i++){
  printf("\nFuncionario %d\n",i+1);
  printf("Digite o nome: ");scanf(" %49[^\n]",nome);
  printf("Digite a matricula: ");scanf("%d",&matricula);
  fprintf(arquivo,"Nome: %s\nMatricula: %d\n\n",nome,matricula);
 }
 fclose(arquivo);printf("Dados gravados com sucesso!\n");return 0;
}
