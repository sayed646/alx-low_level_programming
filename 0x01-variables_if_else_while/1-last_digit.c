#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if ((n % 10) > 5)
		printf("last digit of %d is %d and is grater than 5\n", n, n % 10);
	if else ((n % 10) > 6)
		printf("last digit of %d is %d and is les than 6 not 0\n", n, n % 10);
	else ((n % 10) = 0)
		printf("last digit of %d is %d and is 0\n", n, n % 10);
	return (0);
}
