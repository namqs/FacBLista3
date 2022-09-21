/*Implementar um programa que leia um valor
inteiro n1. Se este não estiver no intervalo de
100 a 999, uma mensagem deve ser exibida ao
usuário informando que o número é inválido e,
em seguida, a execução do programa terminará.
Caso o valor esteja no intervalo definido, o

programa deverá criar um novo valor n2 (e exibi-
lo ao final) contendo os mesmos algarismos de

n1, porém em ordem crescente.
Exemplos:
n1 514
n2 145
n1 929
n2 299
n1 124
n2 124
Nota:
Como definido no enunciado, n1 consiste em um
número inteiro positivo, com 3 algarismos. n2
também será um único número!

algoritmo
- solicitar n1
- exibir mensagem de erro se n tiver de 999 ate 100
- pegar algorismos de n1
- colocar em ordem crescente, transformando em 1 numero.
Cent, Dez, Un
Cent, Un, Dez
Dez, Cent, Un
Dez, Un, Cent
Un, dez, cent
un, cent ,dez

*/

#include <stdio.h>
void main ()
{
  int n1, n2, CentN1, DezN1, UniN1, CentN2, DezN2, UniN2;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    if ((n1<1000) && (n1>99))
    { //separando os algorismos
      CentN1 = n1/100;
      DezN1 = (n1%100)/10;
      UniN1 = (n1%100)%10;

      if (CentN1>DezN1 && DezN1>UniN1)
      {
        UniN2 = UniN1 * 100;
        DezN2 = DezN1 * 10;
        n2= CentN2+DezN2+UniN1; //uni, dez, cent

        printf("Seu numero gerado foi: %d", n2);
      }
        else if (CentN1>UniN1 && UniN1>DezN1)
        {
          DezN2 = DezN1 * 100;
          UniN2 = UniN1 * 10;
          n2 = CentN2 + UniN2 + DezN1; // dez, uni, cent

          printf("Seu numero gerado foi: %d", n2);
        }
          else if (DezN1>CentN1 && CentN1>UniN1)
          {
            UniN2 = UniN1 * 100;
            CentN2 = CentN1 * 10;
            n2 = DezN2 + CentN2 + UniN1; //uni, cent, dez

            printf("Seu numero gerado foi: %d", n2);
          }
            else if (DezN1>UniN1 && UniN1>CentN1)
            {
              CentN2 = CentN1 * 100;
              UniN2 = UniN1 * 10;
              n2 = CentN2 + UniN2 + DezN1; //cent, uni, dez

              printf ("Seu numero gerado foi: %d", n2);
            }
              else if (UniN1>CentN1 && CentN1>DezN1)
              {
                DezN2 = DezN1 * 100;
                CentN2 = CentN1 * 10;
                n2 = DezN2 + CentN2 + UniN1; //dez, cent, uni

                printf ("Seu numero gerado foi %d", n2);
              }
              else
              {
                CentN2 = CentN1 * 100;
                DezN2 = DezN1 * 10;
                n2 = CentN2 + DezN2 + UniN1;

                printf("Seu numero gerado foi: %d", n2);
              }
    }
      else
      {
        printf("Esse numero eh invalido.");
      }

}
