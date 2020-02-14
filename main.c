#include <stdio.h>
#include <stdlib.h>

int calcularCubo(int numero)
{
    return numero*numero*numero;
}

int main()
{
    int numero;
    printf("Dame un numero: ");
    scanf("%d",&numero);
    calcularCubo(numero);
    printf("el cubo es : %d ",calcularCubo(numero));





















    /**printf("Hello world!\n");
    return 0;

    **/
}
