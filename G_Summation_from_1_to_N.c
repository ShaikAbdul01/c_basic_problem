#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int count = (long long)n * (n + 1) / 2;
    printf("%lld\n", count);
    return 0;
}