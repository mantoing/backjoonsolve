#include <stdio.h>

int makesum(int a)
{
	int sum = a;
	while (a > 0)
	{
		sum = sum + a % 10;
		a = a / 10;
		if (sum > 10000)
			return 0;
	}
	return sum;
}

int main()
{
	int n;
    int arr[10002] = {0, };
	for (int i = 1; i <= 10000; i++)
	{
		n = makesum(i);
		arr[n]++;
	}
	for (int i = 1; i <= 10000; i++)
	{
		if (arr[i] == 0)
			printf("%d\n", i);
	}
	return 0;
}