/*Hacer un programa que solicite por teclado que se ingresen dos n�meros y luego guardarlos en dos variables distintas.
 A continuaci�n se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.
 Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B, entonces A=3 y B=8,
 pero luego debe quedar A=8 y B=3.
 */


#include<iostream>
using namespace std;

int main () {
    int a, b,j;

    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese otro numero: ";
    cin>> b;


    j=a;
    a=b;
    b=j;

    cout << a << "," <<b;










return 0;
}
