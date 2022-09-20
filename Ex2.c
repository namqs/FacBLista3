/*Faça um programa que, dadas duas datas (cada
qual com dia, mês e ano) fornecidas pelo
usuário, determine qual delas é a mais recente.

Algoritmo:
- solicitar datas
- se AnoData1 > AnoData2, retornar "Data 1"
   senão, se Anodata2 > AnoData1, retornar "Data 2"
    senão, se  MesData1 > MesData2, retornar "Data 1"
      senão, se MesData2 > MesData1, retornar "Data 2"
        senão, se DiaData1 > DiaData2, retornar "Data 1"
          senão, se DiaData2 > DiaData1, retornar "Data 2"
            senão, retornar "As datas são iguais."*/

#include <stdio.h>
void main ()
{
  int DiaData1, DiaData2, MesData1, MesData2, AnoData1, AnoData2;

    printf("Digite o dia da primeira data, o mes e o ano: ");
    scanf("%d %d %d", &DiaData1, &MesData1, &AnoData1);
    printf("Digite o dia da segunda data, o mes e o ano: ");
    scanf("%d %d %d", &DiaData2, &MesData2, &AnoData2);

    if (AnoData1>AnoData2)
    {
      printf("A data 1 eh mais recente.");
    }
      else if (AnoData2>AnoData1)
      {
        printf("A data 2 eh mais recente.");
      }
        else if (MesData1>MesData2)
        {
          printf("A data 1 eh mais recente");
        }
          else if (MesData2>MesData1)
          {
            printf("A data 2 eh mais recente");
          }
            else if (DiaData1>DiaData2)
            {
              printf("A data 1 eh mais recente.");
            }
              else if (DiaData2>DiaData1)
              {
                printf("A data 2 eh mais recente");
              }
                else
                {
                  printf("As datas são iguais.");
                }
}
