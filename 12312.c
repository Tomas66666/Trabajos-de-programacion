#include <stdio.h>
#include <stdlib.h>


int signo(int numero)
{
    int rest;
    if(numero == 0)
    {
        rest= 0;
    }
     if(numero>0)
    {
        rest = 1;
    }
     if(numero<0)
    {
        rest = -1;
    }

return rest;

}











int main()
{
    int numero;
    printf("dame un numero :");
    scanf("%d",&numero);
    signo(numero);
    printf("el valor es : %d",signo(numero) );





















    /**printf("Hello world!\n");
    return 0;**/


}
