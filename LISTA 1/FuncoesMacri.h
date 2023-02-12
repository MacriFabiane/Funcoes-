int primo (int x)
{
    int i, contDiv=0;

    for (i=2; i<x ;i++)
    {
       if (x%i==0)
       {
           contDiv++;
           break;
       }
    }

    return (contDiv);
}

//PRIMOS DE 1 a 100;

void primos1100 (void)
{
   int i, contDiv, k, contPrimos=0;
do
{
    contDiv=0;
    for (i=1; i<=k ;i++)
    {
       if (k%i==0)
       {
           contDiv++;

       }
    }
        if (contDiv==2)
    {
        printf ("%d\t", k);
        contPrimos++;
    }
    k++;
}while (k<100);

}
//FAZER MEDIA DE PRIMOS ENTRE UM INTERVALO (DECRESCENTE)

void mediaprimos (void)
{
   int i, contDiv, k=100, contPrimos=0,soma=0;
   float media;
do
{
    for (k=200; k>100; k--)
    {
     contDiv=0;
     for (i=2; i<k; i++)
    {
       if (k%i==0)
       {
           contDiv++;
       }
    }
    if (contDiv==0)
    {
        printf ("%d\t", k);
        contPrimos++;
        soma=soma+k;
    }

    }


}while (k>100);
printf ("Media: %.2f", (float)soma/contPrimos);

}
// FATORIAL
void calculafat (int in)
{
     int i, j, produto=1;
  do{
        j=in;
        produto=1;

        printf("%d --> %d ", j,j);
        for (j=in-1; j>=1; j--)
        {
             printf ("* %d\t", j);
             produto=produto*j;
        }
        printf ("= %d", produto);

    }while (j>=1);

}

void fat (int in, int sup)
{
    int i, j, produto;
do{
    for (i=in; i<=sup; i++)
    {
        produto=1;
        printf ("\n%d! => ", i);
        for (j=i; j>1; j--)
        {
            printf ("%d * ", j);
            produto=produto*j;
        }
         printf ("1 = %d", produto);
    }
    }while (i<=sup);
}

