#include <stdio.h>
int main()
{
    /*  X = (A * B) - (C * D) */

    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int x = (a * b) - (c * d);
    printf("Difference = %lld\n", x);
    return 0;
}