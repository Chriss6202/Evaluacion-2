#include "iostream"
#include "cmath"
#include "math.h"
using namespace std;

int main()
{
float horasn[30], salarion, n, horase[30], salarioe, salariot, salariota[30], ss, afp, isr, salarior;
int i;

cout << "Calculo de salarios" << endl;
cout << "introduzca el numero de empleados de los cuales se calculara el salario" << endl;
cin >> n;
if (n > 30)
{
cout << endl << "Solo se puede promediar hasta 30 salarios, por favor, reinicie el programa.";
}
else
{
cout << "Introduzca las horas de trabajo regulares" << endl;
for (i = 0; i < n; i++)
{
cin >> horasn[i];
}
cout << "Introduzca las horas de trabajo extras" << endl;
for (i = 0; i < n; i++)
{
cin >> horase[i];
}
cout << "Los salarios totales son:" << endl;
for (i = 0; i < n; i++)
{
salarion = 1.75 * horasn[i];
salarioe = 2.50 * horase[i];
salariot = salarion + salarioe;
cout << i + 1 << ")" << salariot << endl;
salariota[i] = salariot;
}
cout << "Los salarios reales son:" << endl;
for (i = 0; i < n; i++)
{
ss = 0.04 * salariota[i];
afp = 0.0625 * salariota[i];
isr = 0.1 * salariota[i];    
if (salariota[i] > 500)
{
salarior = salariota[i] - (ss + afp + isr);
cout << i + 1 << ")" << salarior << endl;
}
else
{
salarior = salariota[i] - (ss + afp);
cout << i + 1 << ")" << salarior << endl;
}
}
}
}