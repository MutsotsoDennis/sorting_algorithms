#include <stdio.h>
#include "sort.h"

/**
 * print_lzt - Prints a list of integers
 *
 * @lzt: The list to be printed
 */
void print_lzt(const lzt_int *lzt)
{
	int q;

	q = 0;
	while (lzt)
	{
		if (q > 0)
			printf(", ");
		printf("%d", lzt->nd);
		++q;
		lzt = lzt->post;
	}
	printf("\n");
}
