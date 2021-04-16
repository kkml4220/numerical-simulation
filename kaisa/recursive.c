#include <stdio.h>

#define N 10

/* プロトタイプ宣言 */
int an(int n);
int bn(int b);

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
        return 6;
    else
        return (an(n - 1) + bn(n - 1));
}

/* 漸化式(再帰関数) */
int bn(int n)
{
    if (n == 1)
        return 5;
    else
        return (bn(n - 1) + 2);
}