#include <stdio.h>
#include <string.h>

int checkword(char arr[], int len)
{
    int ch = 0;

    for (int i= 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                ch = j - i;
                if (ch > 1)
                {
                    if (arr[j - 1] != arr[j])
                        return 0;
                }
            }
        }
    }
    return 1;
}

int main(void)
{
    int i, n;
    char arr[102];
    int count = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", arr);
        count += checkword(arr, strlen(arr));
    }

    printf("%d", count);
    return 0;
}