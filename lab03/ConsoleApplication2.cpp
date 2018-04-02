#include "stdafx.h"

#define SZ 5
int sort_number(const void *a, const void *b);
int main()
{
	int number[SZ] = { 5,6,5,5,1 };
	qsort(number, 5, sizeof(int), sort_number);
	for (int i = 0; i<SZ; ++i)
	{
		int diffElements = 1;

		for (i = 1; i < SZ; ++i)
			diffElements += (number[i] != number[i - 1]);

		for (i = 0; i < SZ; ++i)
			printf("%d ", number[i]);

		printf("\ndifferent elements: %d\n", diffElements);

	}
}
int sort_number(const void *a, const void *b)
{
	int x = *(int *)a;
	int y = *(int *)b;
	return x - y;
}


