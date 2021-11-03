#include <stdio.h>
#include <locale.h>

int main()
{
    float km, s, kmh, vm, ms,m,ms2;
    setlocale(LC_ALL, "Portuguese");
    km = 3;
    s = 90;
    ms = 3,6;
    m = km*1000;

    ms2 = m / s;

    kmh = ms2 * ms;

    printf(" O resultado em km/h é: %f ",kmh);



  return 0;
}
