#include <stdio.h>
#include "MinhasFuncoes.h" //colocar dcom aspas pois não é original do C

int main (void)
{
    int num, result;
    do{
     printf ("Informe um numeromenor entre 0 e 12: ");
     scanf( "%d", &num);
     if (num<0 || num>=12)
     {
         printf ("Valor invalido\n");
     }

    }while(num<0 || num>=12);

    result= Fat(num);
    printf ("Fatorial de %d: %d\n", num, result);

    mostraFat(num, result);

    return 0;
}
