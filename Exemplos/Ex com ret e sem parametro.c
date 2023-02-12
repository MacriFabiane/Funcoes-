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
void multiplicacao (void)
{
    int num1, num2, result; //vai fazer de novo!

    printf ("Informe o primeiro valor: ");
    scanf ("%d", &num1);
    printf ("Informe o segundo valor: ");
    scanf ("%d", &num2);

    result= num1*num2;

    printf ("Multiplicação: %d\n", result);

}
float divisao (void) //NEW
{
    int num1, num2;
    float result; //vai fazer de novo!

    printf ("Informe o primeiro valor: ");
    scanf ("%d", &num1);
    do{
    printf ("Informe o segundo valor: ");
    scanf ("%d", &num2);

    if (num2<=0)
    {
        printf ("Valor invalido\n");
    }
    }while (num2<=0);

    result =(float)num1/num2;
    return (result);

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

    multiplicacao();

    printf ("Divisao: %.2f\n", divisao()); //NEW!

    return 0;
}


