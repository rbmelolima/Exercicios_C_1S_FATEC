#include <stdio.h>
#define ex6

#ifdef ex0
/*
Solicite ao usuario a quantidade de numeros desejada representada x.

A variavel num representa cada numero par digitado pelo usuário.

Exiba o maior numero par digitado.
*/
main()
{
  int quantity, num, maior = 0, cont;

  printf("\nDigite a quantidade de numeros: ");
  scanf("%i", &quantity);

  while (quantity <= 0)
  {
    printf("\nQuantidade invalida, digite novamente: ");
    scanf("%i", &quantity);
  }

  for (cont = 0; cont < quantity; cont++)
  {
    printf("\nDigite um numero qualquer: ");
    scanf("%i", &num);

    while (num % 2 != 0)
    {
      printf("\nNão é par, digite novamente:");
      scanf("%i", &num);
    }

    if (num > maior)
      maior = num;
  }
  printf("O maior numero par digitado foi %d\n", maior);
}
#endif

#ifdef ex8
main()
{
  int people = 0;
  float weight = 0;
  float average = 0;

  printf("Digite o número de pessoas: ");
  scanf("%i", &people);

  for (int i = 0; i < people; i++)
  {
    printf("\nDigite o peso da pessoa %i: ", i + 1);
    scanf("%f", &weight);

    average += weight / people;
  }

  printf("\n\nMedia de pesos: %2.f kg", average);
}
#endif

#ifdef ex7
main()
{
  int terms = 0;
  int number = 0;
  double product = 0;

  printf("Digite o número de termos: ");
  scanf("%i", &terms);

  for (int i = 0; i < terms; i++)
  {
    printf("Digite o termo %i: ", i + 1);
    scanf("%i", &number);

    if (i == 0)
      product = number;

    else    
      product *= number;    
  }

  printf("\nProdutos: %2.f", product);
}
#endif

#ifdef ex6
main()
{
  int terms = 0;
  int number = 0;
  int divisible7 = 0;

  printf("Digite o número de termos: ");
  scanf("%i", &terms);

  for (int i = 0; i < terms; i++)
  {
    printf("Digite o termo %i: ", i + 1);
    scanf("%i", &number);

    if (number % 7 == 0)
      divisible7++;
  }

  printf("\nDivisiveis por 7: %i", divisible7);
}
#endif