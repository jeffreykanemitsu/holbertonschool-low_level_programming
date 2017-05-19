#include <stdio.h>

	int n;

for (n = 1; n <= 99; n++)
{
	printf("%d  ", n);
	if (!(n % 3))
	{
		printf("Fizz");
	}
	if (!(n % 5))
	{
		printf("Buzz");
	}
	if (!(n % 15))
	{
		printf("FizzBuzz");
	}
}
