#include <cstdio>
#include <iostream>
using namespace std;
const int maxn = 10000000;
int a[maxn];

void print_permutation(int n, int *A, int cur)
{
    if (cur == n)
    {
        for (int i = 0; i < n; i++)
            printf("%d ", A[i]);
        printf("\n");
    }
    else
        for (int i = 1; i <= n; i++)
        {
            int ok = 1;
            for (int j = 0; j < cur; j++)
                if (A[j] == i)
                    ok = 0;
            if (ok)
            {
                A[cur] = i;
                print_permutation(n, A, cur + 1);
            }
        }
}

int main()
{
    print_permutation(2, a, 0);
    return 0;
}