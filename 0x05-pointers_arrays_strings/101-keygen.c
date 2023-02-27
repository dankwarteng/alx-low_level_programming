#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int sum;
	char i;
	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		i = rand() % 128;
		sum += i;
		putchar(i);
	}
	putchar(2772 - sum);
	return (0);
}
