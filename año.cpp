#include "iostream"
#include "cmath"
#include "math.h"
#include "stdlib.h"
using namespace std;

int main()
{
int anio, anior, pr1, pr2;

cout << "Es el anio bisiesto?" << endl;
cout << "Indique el anio que quiera saber si es bisiesto o no" << endl;
cin >> anio;

anior = anio % 400;

if (anior == 0)
{
cout << "El anio " << anio << " es bisiesto";
}
else
{
pr1 = anio % 4;
pr2 = anio % 100;

if (pr1 == 0 && pr2 != 0) 
{
cout << "El anio " << anio << " es bisiesto";
}
else
{
cout << "El anio " << anio << " no es bisiesto";   
}
}


}