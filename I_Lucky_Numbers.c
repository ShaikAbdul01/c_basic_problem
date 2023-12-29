#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int x = n / 10;
    int y = n % 10;
    if (y % x == 0 || x % y == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}