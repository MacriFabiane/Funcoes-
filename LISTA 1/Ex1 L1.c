
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include "FuncoesMacri.h"

int main (void)
{
    setlocale (LC_ALL, "Portuguese");
    int num, duz=200, cem=100;
    char ch, x;
do{
        printf ("\nA- Verificar se o numero eh primo\n");
        printf ("B- Exibir os numeros primos de 1 a 100\n");
        printf ("c- Media dos primos entre 200 e 100\n\n");

        printf ("Sua escolha: ");
        setbuf(stdin, NULL);
        scanf ("%c", &ch);


    switch (toupper(ch))
    {

        case 'A':
        do{
        printf ("\nInsira um numero: ");
        scanf ("%d", & num);
        if (num<0)
        {
            printf ("o numero tem que ser positivo!\n");
        }
        }while (num<0);

        if (primo (num)==0)
       {
           printf ("%d eh primo\n\n", num);
       }
       else
       {
           printf ("%d nao eh primo\n\n", num);
       }
       break;

        case 'B':
            printf ("Esses são os números primos de 1 a 100:\n");
            primos1100();
            break;

        case 'C':
            printf ("Média dos números primos entre 200 e 100:\n");
            mediaprimos ();

    }

    printf ("\nDeseja repetir o programa? ");
    setbuf (stdin, NULL);
    scanf ("%c", &x);
}while (x=='S' || x=='s');
return 0;
}
