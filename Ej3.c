#include <stdio.h>
#include <stdlib.h>


int factorizar(int numero)
{
    int i = 1;
    int retorno = 1;
    if(numero == 0)
    {
        retorno = 1;

    }
    else
    {

        while(i<=numero)
        {

            retorno= retorno*i;
            i++;
        }

    }
    return retorno;


}

int main()
{
    int numero =0;
    printf("Ingrese un numero: ");
    scanf("%d",&numero);
    printf("el factorial del numero es: %d",factorizar(numero));




    /**printf("Hello world!\n");
    **/
    return 0;
}
