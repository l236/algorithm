#include <cstdio>
#include <algorithm> //Include next_permutation api.

using namespace std;

int main()
{
    int n, p[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &p[i]);
    sort(p, p + n);
    do
    {
        for (int i = 0; i < n; i++)
            printf("%d ", p[i]); // Output the permutation.
        printf("\n");
    } while (next_permutation(p, p + n));
    return 0;
}