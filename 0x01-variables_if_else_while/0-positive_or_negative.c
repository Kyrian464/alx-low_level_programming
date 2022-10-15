#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* main -ENTRY POINT
 *
 * return: Always 0 (success)
 */
int main(void)
{
	int n, n1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n1 = n;
		if (n1 > 0)
			printf("%d is positive\n", n);
	
		else if (n1 == 0)
			printf("%d is zero\n", n);

		else (n1 < 0);

			printf("%d is negative\n", n);
	return (0);
}
