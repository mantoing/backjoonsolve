#include <stdio.h>

int main()
{
    int a, b;
    int y;

    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <=b; i++)
    {
        if (a % i == 0 && b % i == 0)
            y = i;
    }

    printf("%d\n", y);
    printf("%d", a * b / y);
}