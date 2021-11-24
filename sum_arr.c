#include <stdio.h>

int sum1(int *a, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += a[i];
    return ans;
}

int sum2(int *begin, int *end)
{
    int n = end - begin;
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += begin[i];
    return ans;
}

int sum3(int *begin, int *end)
{
    int ans = 0;
    for (int *p = begin; p != end; p++)
        ans += *p;
    return ans;
}

int main()
{
    int a[] = {1, 2, 3, 4};
    printf("%d\n", sum1(a + 1, 3));
    printf("%d\n", sum2(a + 1, a+4));
    printf("%d\n", sum3(a + 1, a+4));
    return 0;
}