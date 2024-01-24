#include "sort.h"

/**
 * swap_Ints - Swap two integers in an array.
 * @fst: The first integer to swap.
 * @snd: The second integer to swap.
 */
void swap_Ints(int *fst, int *snd)
{
	int tmpz;

	tmpz = *fst;
	*fst = *snd;
	*snd = tmpz;
}

/**
 * bubBle_sort - Sort an array of integers in ascending order always.
 * @arrei: An array of integers to sort.
 * @sise: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubBle_sort(int *arrei, size_t sise)
{
	size_t q, leng = sise;
	boolE bubBly = OFF;

	if (arrei == NULL || sise < 2)
		return;

	while (bubBly == OFF)
	{
		bubBly = ON;
		for (q = 0; q < leng - 1; q++)
		{
			if (arrei[q] > arrei[q + 1])
			{
				swap_Ints(arrei + q, arrei + q + 1);
				print_arrei(arrei, sise);
				bubBly = OFF;
			}
		}
		leng--;
	}
}
