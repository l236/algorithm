#include <stdio.h>
#include <string.h>
#define maxn 1010
int a[maxn];
int main()
{
    int n, k, first = 1;
    scanf("%d%d", &n, &k);
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j % i == 0)
            {
                a[j] = !a[j];
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            printf("%d ", i);
        }
        if (i == n)
            printf("\n");
    }
}