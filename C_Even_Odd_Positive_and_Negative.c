#include <stdio.h>
int main()
{

    int n,x;
    scanf("%d", &n);
    int isEven = 0, isOdd = 0, isPos = 0, isNeg = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            isEven++;
        }
        if (x % 2 != 0)
        {
            isOdd++;
        }
        if (x > 0)
        {
            isPos++;
        }
        if (x < 0)
        {
            isNeg++;
        }
    }
    printf("Even: %d\n", isEven);
    printf("Odd: %d\n", isOdd);
    printf("Positive: %d\n", isPos);
    printf("Negative: %d\n", isNeg);
    return 0;
}