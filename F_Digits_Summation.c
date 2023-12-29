#include <stdio.h>
int main()
{
    long long int n, m;
    scanf("%lld %lld", &n, &m);
    printf("%d\n", n % 10 + m % 10);
    return 0;
}