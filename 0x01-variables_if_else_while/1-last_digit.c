#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s%d%s%d", "Last digit of ", n, " is ", (n % 10));
	s = n % 10;
	if (s > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (s < 0)
	{
		printf(" and is less than 6 and not 0\n");
	}
	else if (s == 0)
	{
		printf(" and is 0\n");
	}
	return (0);}	
