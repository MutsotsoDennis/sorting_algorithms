#include <stdlib.h>
#include <stdio.h>

/**
 * print_arrei - Prints an array of integers
 *
 * @arrei: The array to be printed
 * @sise: Number of elements in @array
 */
void print_arrei(const int *arrei, size_t sise)
{
	size_t q;

	q = 0;
	while (arrei && q < sise)
	{
		if (q > 0)
			printf(", ");
		printf("%d", arrei[q]);
		++q;
	}
	printf("\n");
}
