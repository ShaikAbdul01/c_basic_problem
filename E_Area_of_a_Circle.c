#include <stdio.h>

int main()
{
    double r;
    scanf("%lf", &r);
    const double pi = 3.141592653;
    double area = pi * (r * r);
    printf("%.9lf\n", area);

    return 0;
}
