# PA
Lista PA
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3,j=5, *p, *q;
    p = &i;
    q = &j;
    p == &i; // resposta = 3
    printf("p = %d", i);
    *p - *q; // resposta = -2
    printf("\n*p - *q = %d", *p-*q);
    **&p; // resposta = 3
    printf("\n**p = %d", *p);
    3 - *p/(*q) + 7;
    printf("\n3-*p/(*q)+7 = %d", 3 - *p/(*q) + 7); // resposta = 10
    return 0;
}
