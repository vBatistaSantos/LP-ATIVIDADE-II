/*
Em um projeto de classificação de alunos, desenvolva um programa que receba a nota de um aluno e determine sua classificação com base na seguinte tabela:
   - Nota maior ou igual a 9: "Excelente"
   - Nota entre 7 e 8.9: "Bom"
   - Nota entre 5 e 6.9: "Razoável"
   - Nota menor que 5: "Insuficiente"
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  float nota;

  printf("Informe a nota: ");
  scanf("%f",&nota);

  if(nota>=9){
    printf("\nExcelente!");
  }else if(nota>=7&&nota<8.9){
    printf("\nBom!");
  }else if(nota>=5&&nota<6.9){
    printf("\nRazoável");
  }else{
    printf("\nInsuficiente");
  }
  

  return 0;
}