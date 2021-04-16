#include <stdio.h>

#define N 100

int main(void)
{
    int an;

    an = 1; // 初項
    for (int n = 1; n <= N; n++)
    {
        printf("a[%d] = %d\n", n, an);
        an = an + 4;
    }
    return 0;
}