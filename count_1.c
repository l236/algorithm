#include <stdio.h>
#include <string.h>
#define maxn 10000

int main()
{
    char s[maxn];
    scanf("%s", s);
    int tot = 0;
    printf("%d\n", (int)strlen(s));
    for (int i = 0; i < strlen(s); i++)
        if (s[i] == '1')
            tot++;
    printf("%d\n", tot);
    return 0;
}