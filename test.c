#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    count=count++;
    printf("%d\n",count);
    printf("%d %d %d\n",count++,count++,count++);
    return 0;
}