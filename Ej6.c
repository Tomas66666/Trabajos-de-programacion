#include <stdio.h>
#include <stdlib.h>

int main()
{
 char nombre[20];
 char calle [30];
 char ciudad [30];
 char provincia[30];
 char codigoPostal[30];
 char telefono[30];


printf("\n Nombre: ");
gets(nombre);
printf("\n Calle: ");
gets(calle);
printf("\n Ciudad: ");
gets(ciudad);
printf("\n Provincia: ");
gets(provincia);
printf("\n codigo postal: ");
gets(codigoPostal);
printf("\n Telefono: ");
gets(telefono);


printf("\n\n%s \t %s\n",nombre,calle);
printf("%s \t %s\n",ciudad,provincia);
printf("%s \t %s\n",codigoPostal,telefono);





























    /**printf("Hello world!\n");
    **/return 0;
}
