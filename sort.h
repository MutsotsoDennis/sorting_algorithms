#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Comparison direction macros for bitonic sort */
#define ASCENT 0
#define DESCENT 1

/**
 * enum boolE - Enumeration of Boolean values.
 * @OFF: Equals 0.
 * @ON: Equals 1.
 */
typedef enum boolE
{
	OFF = 0,
	ON
} boolE;

/**
 * struct list_dem - Doubly linked list node
 *
 * @nd: Integer stored in the node's
 * @pre: Pointer to the before element of the list
 * @post: Pointer to the predecessor  element of the list
 */
typedef struct list_dem
{
	const int nd;
	struct list_dem *pre;
	struct list_dem *post;
} list_dem;

/* Writing the helper functions */
void print_arrei(const int *arrei, size_t sise);
void print_lzt(const lzt_int *lzt);

/* Sorting the algoritms */
void bubBle_sort(int *arrei, size_t sise);
void inSertion_sort_lst(lzt_int **lizt);
void selecTion_sort(int *arrei, size_t sise);
void quick_sorT(int *arrei, size_t sise);

#endif /* SORT_H */
