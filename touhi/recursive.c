#include <stdio.h>

#define N 100

/* プロトタイプ宣言 */
int an(int n);

int main(void)
{
    for (int n = 1; n <= N; n++)
        printf("a[%d] = %d\n", n, an(n));
    return 0;
}

/* 漸化式(再帰関数) */
int an(int n)
{
    if (n == 1)
        return 1;
    else
        return (an(n - 1) + 4);
}