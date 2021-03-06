/* 
 * 7. Write a pointer version of the sort() function from Chapter 7, “Working
 * with Functions.” Be certain that pointers are exclusively used by the
 * function, including index variables in the loops.
 *
 * By Faisal Saadatmand 
 */

#include <stdio.h>

#define SIZE 16

void sort(int *, int);

void sort(int *p, int n)
{
	int *q, *const end = p + n, temp;

	for ( ; p < end; ++p)
		for (q = p + 1; q < end; ++q)
			if (*p > *q) {
				temp = *p;
				*p = *q;
				*q = temp;
			}
}

int main (void) 
{
	int i;
	int array[SIZE] = { 34, -5, 2, 0, 12, 100, 56, 22,
						44, -3, -9, 11, 17, 29, 6, 18 };

	printf("The array before the sort:\n");
	for (i = 0; i < SIZE; ++i)
		printf("%i ", array[i]);

	sort (array, SIZE);

	printf("\n\nThe array after the sort:\n");
	for (i = 0; i < SIZE; ++i)
		printf("%i ", array[i]);

	printf("\n");

	return 0;
}
