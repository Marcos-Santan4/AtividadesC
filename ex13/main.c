#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    double km, mh;
    setlocale(LC_ALL,"portuguese");

    printf("Informe a dist�ncia em Quilometros >> ");
    scanf("%lf",&km);

    mh = km/1.61;

    printf("A dist�ncia convertida em Milhas >> %.2lf",mh);
    return 0;
}
