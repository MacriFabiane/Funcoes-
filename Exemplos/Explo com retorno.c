#include <stdio.h> //antes da main, depois da main, ou em um novo prog

void soma(int valor1, int valor2)//vao receber os valores num1 e num2; na ordem que está na main
{
    int result;
    result=valor1+valor2;

    printf ("Soma: %d\n", /*valor1+valor2*/ result);
}
int subtracao (int valor1, int valor2)
{
    int result;
    result= valor1-valor2;

    return(result);//aí retorna o resultado ou oq vc quiser
}

int main (void)
{
    int num1, num2;

    printf ("Informe o primeiro valor: ");
    scanf ("%d", &num1);
    printf ("Informe o segundo valor: ");
    scanf ("%d", &num2);

    soma(num1, num2);

    printf ("Subtracao: %d\n", subtracao(num1, num2)); //vai ficar o retorno

    return 0;
}
