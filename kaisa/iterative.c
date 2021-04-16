#include <stdio.h>

#define N 10

int main(void)
{
    int an, bn;

    an = 6;
    bn = 5;
    for (int n = 1; n <= N; n++)
    {
        printf("a[%d] = %d\n", n, an);
        an = an + bn;
        bn = bn + 2;
    }
    return 0;
}