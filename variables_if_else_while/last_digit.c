#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

    if (n % 10 != 0 && n % 10 < 6)
	{
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, n % 10);
	}
    else if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
    else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	} 
	return (0);
}