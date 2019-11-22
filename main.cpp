#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <conio.h>
#include <stdio.h>

int main()
{
    char nombre[20];
char saludador[20] = "Juan";
    printf( "Introduzca el nombre de la perosna a la que saludar: " );
    scanf( "%s", nombre ); //Sirve para introducir datos y guardarlos, %s es lo que has introducido y nombre es la variable que guardas
    printf( "Hola %s, buenos dias.", nombre, 161 );
    printf("%s te saluda", saludador,150);

    getch(); /* Pausa */

    return 0;
}

