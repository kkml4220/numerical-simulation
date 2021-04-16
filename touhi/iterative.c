#include <stdio.h>

#define N 10

int main(void)
{
    int an;

    an = 1;
    for (int n = 1; n <= N; n++)
    {
        printf("a[%d] = %d\n", n, an);
        an = an * 3;
    }
    return 0;
}