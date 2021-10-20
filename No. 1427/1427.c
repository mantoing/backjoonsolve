#include <stdio.h>
#include <string.h>

void bsort(char *str)
{
    int i, j;
    int len;
    char temp;

    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len - (i+1); j++)
        {
            if (str[j] < str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main()
{
 char str[15];
 scanf("%s", str);
 bsort(str);
 printf("%s", str);   
}