//Fazer duas fun��es: uma para calcular o fatorial de um n�mero e a outra para mostrar o fatorial de um n�mero. Ambas as fun��es
//devem ser implementadas em um arquivo de cabe�alho chamado "fatorial.h". Elaborar um programa que use essas fun��es para:
#include <stdio.h>
#include "FuncoesMacri.h"
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    int num, choice, i=1, sup=8;
    char ch;
do{
    printf ("\n1- Mostrar o fatorial dos n�meros de 1 a 8\n");
    printf ("2- Fatorial de um n�mero positivo.\n");

    printf ("Qual a sua escolha? ");
    scanf ("%d", &choice);


    switch (choice)
    {

    case 1:
        {
            fat(i,sup);
            break;
        }

    case 2:
       {
        do
        {
         printf("Digite um n�mero positivo: ");
         scanf ("%d", &num);
        }while(num<0);

         calculafat(num);

       }
    }
    printf ("\nDeseja repetir programa? ");
    setbuf(stdin,NULL);
    scanf("%c", &ch);
}while (ch=='s'||ch=='S');
}
