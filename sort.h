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
 * @valu: Integer stored in the node's
 * @prev: Pointer to the before element of the list
 * @next: Pointer to the predecessor  element of the list
 */
typedef struct list_dem
{
	const int valu;
	struct list_dem *prev;
	struct list_dem *next;
} list_dem;

/* Writing the helper functions */
void print_arrei(const int *arrei, size_t leng);
void print_nod(const list_nod *nod);

/* Sorting the algoritms */
void bubble_sort(int *arrei, size_t sise);
void insertion_sort_list(list_dem **liist);
void selection_sort(int *arrei, size_t sise);
void quick_sort(int *arrei, size_t sise);

#endif /* SORT_H */
