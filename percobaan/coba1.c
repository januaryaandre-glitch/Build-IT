#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int total = 0;
    for (int i = a; i <= b; i++)
    {
        total = total + i;
    }
    
    printf("%d", total);
    return 0;
}