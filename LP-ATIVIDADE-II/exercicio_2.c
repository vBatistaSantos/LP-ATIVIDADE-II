/*
Você é um desenvolvedor de e-commerce e está trabalhando em um novo sistema de descontos. O sistema oferece um desconto de 10% para compras acima de R$ 100,00 se a compra for feita em um dia de semana. Se a compra for feita em um fim de semana, o desconto será de 15% sobre o valor da compra acima de R$ 100,00.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  float preco,precoDesconto;
  int diaSemana,i;
  char nomeSemana[7][10] = {"Domingo","Segunda","Terça","Quarta","Quinta","Sexta","Sábado"};

  printf("Informe o dia da semana:    \n");
  for(i=0;i<7;i++){
    printf("%d - %s\n",i+1,nomeSemana[i]);
  }
  scanf("%d",&diaSemana);
  printf("\nInforme o valor do produto: ");
  scanf("%f",&preco);

  precoDesconto=preco*100;
  if (preco>100){
    if (diaSemana>1 && diaSemana<7){
      precoDesconto *= 0.9;
    }else{
      precoDesconto *= 0.85;
    }
  }
  precoDesconto/=100;

  system("clear || cls");

  printf("---NOTA FISCAL===\n");
  printf("%s\n\n",nomeSemana[diaSemana-1]);
  printf("PREÇO:             R$%.2f\n",preco);
  printf("PRECO C/ DESCONTO: R$%.2f\n",precoDesconto);

  

  return 0;
}