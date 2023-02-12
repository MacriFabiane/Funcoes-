#include <stdio.h>

int primo (int num);

int main (void)
{
    int valor1, valor2, i;

    do{
        printf ("Informe um valor positivo: ");
        scanf ("%d", &valor1);
        if (valor1<=1)
        {
            printf ("Valor invalido\n");
        }
    }while (valor1<=1);

    if (primo(valor1)==0)
    {
        printf ("%d eh primo", valor1);
    }
    else
    {
        printf ("%d neo eh primo", valor1);
    }

   do{
        printf ("\nInforme um valor positivo para o inicio do intervlo: ");
        scanf ("%d", &valor1);
        if (valor1<=1)
        {
            printf ("Valor invalido\n");
        }
    }while (valor1<=1);
    do{
        printf ("\nInforme um valor positivo para o final do intervalo: ");
        scanf ("%d", &valor2);
        if (valor2<valor1 )
        {
            printf ("Valor invalido\n");
        }
    }while (valor2<valor1);

    printf ("\nNUMEROS PRIMOS NO INTERVALO DE %d A %d\n", valor1, valor2);
    for (i=valor1; i<=valor2; i++)
    {
        if (primo(i)==0)
        {
            printf ("%d\t", i);
        }
    }
    printf ("\nNUMEROS  NAO PRIMOS NO INTERVALO DE %d A %d\n", valor1, valor2);
    for (i=valor1; i<=valor2; i++)
    {
        if (primo(i)==1)
        {
            printf ("%d\t", i);
        }
    }

    return 0;
}

int primo (int num) //funçao primo | para cada variavel dizer o tipo (int, float...) ("ESSE TRECO É CHAMADO DE PROTÓTIPO! DEVE SER POSTO ACIMA DA MAIN")
{
    int i, contDiv=0;

    for (i=2; i<num; i++)
    {
        if  (num%i==0)
        {
            contDiv++;
            break;
        }
    }
    return (contDiv);
}
