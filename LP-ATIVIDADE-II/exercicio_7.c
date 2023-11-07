/*
Exercício 7: 
Em um projeto para um jogo, é necessário cria um menu, crie um programa que exiba um menu com opções (1 - Novo jogo, 2 - Carregar jogo, 3 - Configurações). Solicite ao usuário que escolha uma opção e, utilizando o switch case, execute a funcionalidade correspondente à opção escolhida.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  int codigo,i;
  //float preco;
  char opcoes[3][20]={"Novo jogo","Carregar jogo","Configurações"};
  char configs[3][24]={"=== CONFIGURAÇÕES ===","1 - Vídeo","2 - Áudio"};

  printf("=== MENU ===\n\n");
  for(i=0;i<3;i++){
    printf("%i - %s\n",i+1,opcoes[i]);
  }
  scanf("%d",&codigo);

  system("Clear || cls");

  switch (codigo){
  case 1:
    printf("\nNOVO JOGO!\n\nSTART!\n");
    break;
  case 2:
    printf("\nCARREGANDO SAVE\n\nBEM VINDO DE VOLTA!\n");
    break;
  case 3:
    for(i=0;i<3;i++){
    printf("%s\n",configs[i]);
    }
    break;
  }

  return 0;
}