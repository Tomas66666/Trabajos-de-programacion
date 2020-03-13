#include <stdio.h>
#include <stdlib.h>

int numeroMaximo(int numero [], int cantidadDeElementos)
{
    int maximo;
    int i;
    maximo = numero[0];
    for(i=1; i<cantidadDeElementos; i++)
    {
        if( numero[i]> maximo)
        {
            maximo= numero[i];
        }
    }
    return maximo;


}

int sumaDeNumeros(int numero [],int cantidadDeElementos)
{
    int i;
    int total = 0;
    for(i=0; i<cantidadDeElementos; i++)
    {
        total = total + numero[i];

    }
    return total;
}

int main()
{
    int numero [10];
    int total;
    int i;

    printf("Por favor ingrese 10 numeros: ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&numero[i]);

    }
     printf("total = %d\n",sumaDeNumeros(numero,10));
        printf("maximo = %d\n",numeroMaximo(numero,10));






























    /** printf("Hello world!\n");
     **/
    return 0;
}
