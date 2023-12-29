#include <stdio.h>
int main()
{

    char ch;
    scanf("%c", &ch);
    if (ch >= 'a' && ch < 'z')
    {
        printf("%c\n", ch + 1);
    }
    else if (ch == 'z')
    {
        printf("%c\n", 'z' - 25);
    }
    return 0;
}