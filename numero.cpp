#include "iostream"
#include "cmath"
#include "math.h"
#include "stdlib.h"
using namespace std;

int main()
{
int i, opcion, numero, adivinanza, intentos;
adivinanza = 0;
cout << "Numero magico" << endl << "Tiene 5 intentos para adivinar un numero ya seleccionado" << endl;
cout << "Para empezar, presione un numero del 1 al 5, el cual le permitira al programa elegir un numero" << endl;
cin >> opcion;

switch (opcion)
{

case 1:
cout << "Muy bien, ahora, tiene 5 intentos para adivinar el numero. Buena suerte!" << endl;
numero = 7;
for(i=0; i < 5; i++)
{
cin >> adivinanza;
if (adivinanza == numero)
{
cout << "Felicidades, el numero era " << numero << ", has ganado!";
exit(0);
}   
if (adivinanza < numero)
{
cout << "el numero que digitaste es menor que el verdadero, prueba de nuevo."<< endl;
}
if (adivinanza > numero)
{
cout << "el numero que digitaste es mayor que el verdadero, prueba de nuevo."<< endl;
}
}
cout << "lo lamento, te quedaste sin intentos, mas suerte la proxima.";
break;

case 2:
cout << "Muy bien, ahora, tiene 5 intentos para adivinar el numero. Buena suerte!" << endl;
numero = 30;
for(i=0; i < 5; i++)
{
cin >> adivinanza;
if (adivinanza == numero)
{
cout << "Felicidades, el numero era " << numero << ", has ganado!";
exit(0);
}
if (adivinanza < numero)
{
cout << "el numero que digitaste es menor que el verdadero, prueba de nuevo."<< endl;
}
if (adivinanza > numero)
{
cout << "el numero que digitaste es mayor que el verdadero, prueba de nuevo."<< endl;
}
}
cout << "lo lamento, te quedaste sin intentos, mas suerte la proxima.";
break;

case 3:
cout << "Muy bien, ahora, tiene 5 intentos para adivinar el numero. Buena suerte!" << endl;
numero = 73;
for(i=0; i < 5; i++)
{
cin >> adivinanza;
if (adivinanza == numero)
{
cout << "Felicidades, el numero era " << numero << ", has ganado!";
exit(0);
}
if (adivinanza < numero)
{
cout << "el numero que digitaste es menor que el verdadero, prueba de nuevo."<< endl;
}
if (adivinanza > numero)
{
cout << "el numero que digitaste es mayor que el verdadero, prueba de nuevo."<< endl;
}
}
cout << "lo lamento, te quedaste sin intentos, mas suerte la proxima.";
break;

case 4:
cout << "Muy bien, ahora, tiene 5 intentos para adivinar el numero. Buena suerte!" << endl;
numero = 48;
for(i=0; i < 5; i++)
{
cin >> adivinanza;
if (adivinanza == numero)
{
cout << "Felicidades, el numero era " << numero << ", has ganado!";
exit(0);
}
if (adivinanza < numero)
{
cout << "el numero que digitaste es menor que el verdadero, prueba de nuevo."<< endl;
}
if (adivinanza > numero)
{
cout << "el numero que digitaste es mayor que el verdadero, prueba de nuevo."<< endl;
}
}
cout << "lo lamento, te quedaste sin intentos, mas suerte la proxima.";
break;

case 5:
cout << "Muy bien, ahora, tiene 5 intentos para adivinar el numero. Buena suerte!" << endl;
numero = 17;
for(i=0; i < 6; i++)
{
cin >> adivinanza;
if (adivinanza == numero)
{
cout << "Felicidades, el numero era " << numero << ", has ganado!";
exit(0);
}
if (adivinanza < numero)
{
cout << "el numero que digitaste es menor que el verdadero, prueba de nuevo."<< endl;
}
if (adivinanza > numero)
{
cout << "el numero que digitaste es mayor que el verdadero, prueba de nuevo."<< endl;
}
}
cout << "lo lamento, te quedaste sin intentos, mas suerte la proxima.";
break;

default:
cout << "Ha seleccionado una opcion no disponible, reincie el programa e indique una opcion del 1 al 5.";
break;
}
}