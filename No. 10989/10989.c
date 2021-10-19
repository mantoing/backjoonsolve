#include <stdio.h>

int main()
{
    int n;
    int T[10002] = {0, };
    int temp;

    scanf("%d", &n);

    for (int i=0; i < n; i++)
    {
        scanf("%d", &temp);
        T[temp]++;
    }

    for (int i = 1; i < 10001; i++)
    {
        if (T[i] != 0)
        {
            for (int j = 0; j < T[j]; j++)
                printf("%d\n", j);
        }
    }

    return 0;
}