#include <stdio.h>
typedef struct{char nome[50];float salario;int horasExtras;}Funcionario;
int main(){
 FILE *arquivo;Funcionario funcionario;
 arquivo=fopen("funcionarios.txt","a");
 if(arquivo==NULL){printf("Erro ao abrir arquivo!\n");return 1;}
 for(int i=0;i<5;i++){
  printf("\nFuncionario %d\n",i+1);
  printf("Digite o nome: ");scanf(" %49[^\n]",funcionario.nome);
  printf("Digite o salario: ");scanf("%f",&funcionario.salario);
  printf("Digite as horas extras: ");scanf("%d",&funcionario.horasExtras);
  fprintf(arquivo,"Nome: %s\nSalario: %.2f\nHoras extras: %d\n----------------------\n",funcionario.nome,funcionario.salario,funcionario.horasExtras);
 }
 fclose(arquivo);
 arquivo=fopen("funcionarios.txt","r");
 if(arquivo==NULL){printf("Erro ao ler arquivo!\n");return 1;}
 printf("\n--- FUNCIONARIOS CADASTRADOS ---\n");
 char linha[150];while(fgets(linha,sizeof(linha),arquivo)!=NULL)printf("%s",linha);
 fclose(arquivo);return 0;
}
