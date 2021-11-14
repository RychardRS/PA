#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3,j=5, *p, *q;
    p = &i;
    q = &j;
    p == &i;
    printf("p = %d", i);
    *p - *q;
    printf("\n*p - *q = %d", *p-*q);
    **&p;
    printf("\n**p = %d", *p);
    3 - *p/(*q) + 7;
    printf("\n3-*p/(*q)+7 = %d", 3 - *p/(*q) + 7);
    return 0;
}
