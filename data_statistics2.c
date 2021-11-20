#include <stdio.h>
#define INF 1000000000
int main()
{
    int x, n, k = 0;
    while (scanf("%d", &n) == 1 && n)
    {
        int min = INF, max = -INF, s = 0, x, count = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            if (x < min)
                min = x;
            if (x > max)
                max = x;
            s += x;
            count++;
        }
        if (k++)
            printf("\n");
        printf("Case %d: %d %d %.3f", k, min, max, (double)s / count);
    }
    return 0;
}