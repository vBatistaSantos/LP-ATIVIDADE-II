/*
Exercício 6: 
Considerando um projeto de e-commerce, implemente um programa que solicite ao usuário o código do produto (1 - Camiseta, 2 - Calça, 3 - Sapato). Com base na escolha do usuário, exiba a mensagem informando o produto selecionado e seu preço.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  int codigo,i;
  //float preco;
  char produto[3][10]={"Camiseta","Calça","Sapato"};

  printf("Escolha um produto:\n\n");
  for(i=0;i<3;i++){
    printf("%i - %s\n",i+1,produto[i]);
  }
  scanf("%d",&codigo);

  switch (codigo){
  case 1:
    printf("\n%i - %s: R$70,00\n",codigo,produto[codigo-1]);
    break;
  case 2:
    printf("\n%i - %s: R$301,00\n",codigo,produto[codigo-1]);
    break;
  case 3:
    printf("\n%i - %s: R$60,00\n",codigo,produto[codigo-1]);
    break;
  }

  return 0;
}