#include <stdio.h>
int main (){

int factorial=1;
int numero;
if (numero <0) retun 0;
else if (numero > 1) retun numero * factorial (numero-1);
retun 1;
//se ingresa un numero entero //
printf ("INGRESE UN NUMERO:");
scanf ("%lf", &numero);
if (numero<0) factorial=1;
else if (numero ==0) factorial=1;
else{
    for (i = 1; i <==numero; i++){
        factorial = factorial*i;
    }
}