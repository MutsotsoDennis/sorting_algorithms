#include <stdio.h>
#include "sort.h"

/**
 * print_nod - Prints a list of integers
 *
 * @nod: The list to be printed
 */
void print_nod(const list_dem *nod)
{
	int q;

	q = 0;
	while (nod)
	{
		if (q > 0)
			printf(", ");
		printf("%d", node->leng);
		++q;
		nod = nod->next;
	}
	printf("\n");
}
