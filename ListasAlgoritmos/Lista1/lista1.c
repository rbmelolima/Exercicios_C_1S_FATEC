#include <stdio.h>
#define ex9

#ifdef ex1
main()
{
  int number = 0;

  printf("Digite o número: ");
  scanf("%d", &number);

  printf("%d\n", number - 1);
  printf("%d\n", number + 1);
}
#endif

#ifdef ex2
main()
{
  int number = 0;

  printf("Digite o número: ");
  scanf("%d", &number);

  printf("%f\n", number + number * 0.1);
}
#endif

#ifdef ex3
main()
{
  float number = 0;

  printf("Digite o número: ");
  scanf("%f", &number);

  printf("%f\n", number - number * 0.09);
}
#endif

#ifdef ex4
main()
{
  double valueHour = 0;
  int quantity = 0;
  int discount = 0;

  printf("\nDigite o valor hora aula: ");
  scanf("%f", &valueHour);

  printf("\nDigite o numero de aulas: ");
  scanf("%d", &quantity);

  printf("\nDigite desconto do INSS: ");
  scanf("%d", &discount);

  double bruto = (valueHour * quantity);
  double liquid = bruto - (double)(bruto * (discount * 0.1));

  printf("\nSalario bruto: R$: %2.f", bruto);
  printf("\nDesconto R$: %2.f", discount);
  printf("\nSalario liquido R$: %2.f", liquid);
}
#endif

#ifdef ex9
main()
{
  int note = 0;
  double media = 0;

  for (int i = 0; i < 4; i++)
  {
    printf("Digite a nota %d: ", i + 1);
    scanf("%d", &note);

    while (note > 10 && note < 0)
    {
      printf("Digite a novamente a nota %d: ", i + 1);
      scanf("%d", &note);
    }

    media += (double)(note) / 4;
  }

  if (media > 5)  
    printf("Aprovado");
  
  else  
    printf("Reprovado");  

  printf("Média %f", media);
}
#endif