/*Construir um programa que permita ao usuário
calcular a área de uma figura geométrica. Para
isto, o usuário deverá escolher a figura desejada
([C]írculo, [R]etângulo, [Q]uadrado ou
[T]riângulo) e fornecer as informações
necessárias para que a área desta figura possa
ser calculada.
Notas:
1. Fórmulas para o cálculo das áreas:
a. Acírculo = π.raio2

, onde π = 3.14159;

b. Aretângulo = base.altura;
c. Aquadrado = lado2
;
d. Atriângulo = (base.altura)/2.
2. Caso o usuário escolha uma opção inválida,
uma mensagem de erro deve ser exibida e a
execução do programa terminada.
*/
#include <stdio.h>
void main ()
{
  char Figura;
  int alt, Acirc, Aret, Aqua, Atri, base, raio, lado;

    printf("Digite a letra inicial da sua figura geometrica: ");
    fflush(stdin); // pra limpar o buffer e vc poder inserir o char sem problemas
    scanf("%c", &Figura);

    switch (Figura)
    {
      case 'C': printf("Entre com o valor do raio do seu circulo: "); //As aspas simples devem ser usadas qnd o switch eh com char
                scanf("%d", &raio);

                Acirc = 3 * (raio*2);

                printf("A area do seu circulo eh: %d", Acirc);
                break;

      case 'T': printf("Entre com o valor a alt e a base do seu triangulo: ");
                scanf("%d %d", &base, &alt);

                Atri = (base*alt)/2;

                printf("A area do seu triangulo eh: %d", Atri);
                break;

      case 'Q': printf("Entre com o valor do lado do seu quadrado: ");
                scanf("%d", &lado);

                Aqua = lado*2;

                printf("A area do seu quadrado eh: %d", Aqua);
                break;

      case 'R': printf("Entre com o valor a alt e a base do seu retangulo: ");
                scanf("%d %d", &base, &alt);

                Aret = base*alt;

                printf("A area do seu retangulo eh: %d", Aret);
                break;

      default: printf("o codigo digitado eh invalido.");
    }
}
