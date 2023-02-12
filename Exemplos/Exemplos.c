#include <stdio.h> //antes da main, depois da main, ou em um novo prog

void soma(int valor1, int valor2)//vao receber os valores num1 e num2; na ordem que está na main
{
    int result;
    result=valor1+valor2;

    printf ("Soma: %d\n", /*valor1+valor2*/ result);
}

int main (void)
{
    int num1, num2;

    printf ("Informe o primeiro valor: ");
    scanf ("%d", &num1);
    printf ("Informe o segundo valor: ");
    scanf ("%d", &num2);

    soma(num1, num2);

    return 0;
}
