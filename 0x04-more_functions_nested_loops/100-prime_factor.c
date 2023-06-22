#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
long long largestPrimeFactor(long long number)
{
	long long i, largestFactor;

	while (number % 2 == 0)
	{
		largestFactor = 2;
		number /= 2;
	}

	for (i = 3; i * i <= number; i += 2)
	{
		while (number % i == 0)
		{
			largestFactor = i;
			number /= i;
		}
	}

	if (number > 2)
		largestFactor = number;

	return (largestFactor);
}

int main(void)
{
	long long number = 612852475143;
	long long largestFactor = largestPrimeFactor(number);

	printf("%lld\n", largestFactor);

	return (0);
}
