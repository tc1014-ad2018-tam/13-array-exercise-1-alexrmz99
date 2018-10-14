/*  Este programa tiene el propósito de acomodar n números que el usuario proporcione:
 *  1. Conforme los fue insertando.
 *  2. Al revés de como los fue insertando.
 *
 *
 *  Nombre: Alejandro Ernesto Ramírez Michel
 *  Fecha: 14 de octubre del 2018
 */

#include <stdio.h>

int main() {
    //Primero pregunto al usuario cuántos números introducirá, para así poner un máximo
    int cant;


    //pregunto al usuario cuántos números introducirá, posteriormente le pido los números
    printf("Hello, user. How many numbers are you going to introduce? \n");
    scanf("%i", &cant);

    //ahora pongo variable donde se almacenarán los números dados
    int num [cant];

    //aquí pido los números
    for (int i=0; i<cant; i++) {
        printf("Give me the number you'd like: \n");
        scanf("%i", &num[i]);
    }

    printf("\n");

    //ahora mando a mantalla los números en el orden dado
    printf("The numbers you gave me are: \n");
    for (int i=0; i<cant; i++) {
        printf("\t%i", num[i]);
    }
    printf("\n");
    printf("\n");

    //ahora muestro los números dados por orden contrario
    printf("The numbers you gave me in opposite order are: \n");
    for (int i=cant; i>0; i--) {
        printf("\t%i", num[i-1]);
    }

    printf("\n");


    return 0;
}