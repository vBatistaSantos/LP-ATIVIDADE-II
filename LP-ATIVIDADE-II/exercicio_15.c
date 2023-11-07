/*
Exerc�cio 15: 
Implemente um programa que converta valores entre diferentes unidades de medida, como por exemplo, quil�metros para milhas e Celsius para Fahrenheit. O programa deve permitir ao usu�rio escolher a convers�o desejada e repetir o processo para v�rios valores. Utilize o switch case  e continue mostrando as op��es para convers�o at� o usu�rio digite 0 para sair do programa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

  setlocale(LC_ALL,"portuguese");

  int opcaoCod, i;
  float valor,resultado;
  char opcaoNome[3][20]={"DIST�NCIA","TEMPERATURA","MASSA"};

  printf("=== CONVERSOR ==\n\n");
  for(i=0;i<3;i++){
    printf("%i - %s\n",i+1,opcaoNome[i]);
  }
  scanf("%i",&opcaoCod);
  while (opcaoCod<1 && opcaoCod>3){
    printf("Por favor, selecione dentre as op��es acima: \n");
    scanf("%i",&opcaoCod);
  }

  system("Clear || Cls");

  switch (opcaoCod){
  case 1: //DISTANCIA
    printf("=== DIST�NCIA ==\n\n");
    printf("1 - Quil�metros => Milhas\n");
    printf("2 - Milhas      => Quil�metros\n");
    scanf("%i",&opcaoCod);

    while (opcaoCod<1 && opcaoCod>2){
    printf("Por favor, selecione dentre as op��es acima: \n");
    scanf("%i",&opcaoCod);
    }
    system("Clear || Cls");

    switch (opcaoCod){
      case 1:
        printf("=== QUIL�METROS => MILHAS ==\n\n");
        printf("Informe o valor a ser convertido: ");
        scanf("%f",&valor);

        resultado = valor * 0.621371;

        printf("%.2f milhas\n",resultado);
        break;

      case 2:
        printf("=== MILHAS => QUIL�METROS ==\n\n");
        printf("Informe o valor a ser convertido: ");
        scanf("%f",&valor);

        resultado = valor * 1.609;

        printf("%.2f km\n",resultado);

        break;
    }

    break;
  case 2: //TEMPERATURA
    printf("=== TEMPERATURA ==\n\n");
    printf("1 - Celsius   => Farenheit\n");
    printf("2 - Farenheit => Celsius\n");
    scanf("%i",&opcaoCod);

    while (opcaoCod<1 && opcaoCod>2){
    printf("Por favor, selecione dentre as op��es acima: \n");
    scanf("%i",&opcaoCod);
    }

    system("Clear || Cls");

    switch (opcaoCod){
      case 1:
        printf("=== CELSIUS => FARENHEIT ==\n\n");
        printf("Informe o valor a ser convertido: ");
        scanf("%f",&valor);

        //(0 �C � 9/5) + 32
        resultado = (valor * 9/5) + 32;

        printf("%.2f �F\n",resultado);
        break;

      case 2:
        printf("=== FARENHEIT => CELSIUS ==\n\n");
        printf("Informe o valor a ser convertido: ");
        scanf("%f",&valor);

        //(32 �F ? 32) � 5/9
        resultado = (valor - 32)*5/9;

        printf("%.2f �C\n",resultado);

      break;
    }

    break;
  case 3://MASSA
    printf("=== MASSA ==\n\n");
    printf("1 - Quiloramas   => Libras\n");
    printf("2 - Libras => Quiloramas\n");
    scanf("%i",&opcaoCod);

    while (opcaoCod<1 && opcaoCod>2){
    printf("Por favor, selecione dentre as op��es acima: \n");
    scanf("%i",&opcaoCod);
    }

    system("Clear || Cls");

    switch (opcaoCod){
      case 1:
        printf("=== QUILOGRAMAS => LIBRAS ==\n\n");
        printf("Informe o valor a ser convertido: ");
        scanf("%f",&valor);

        resultado = valor*2.205;
        

        printf("%.2f lb\n",resultado);
        break;

      case 2:
        printf("=== LIBRAS => QUILOGRAMAS ==\n\n");
        printf("Informe o valor a ser convertido: ");
        scanf("%f",&valor);

        resultado = valor / 2.205;

        printf("%.2f kg\n",resultado);

      break;
    }
    
    break;
  }
  
  return 0;
}