#include "stdafx.h"
#define N (5)

int main() {
	int A[N] = { 2, 2, 2, 2, 2 };
	int i, diffElements = 1;

	for (i = 1; i < N; ++i)
		diffElements += (A[i] != A[i - 1]);

	for (i = 0; i < N; ++i)
		printf("%d ", A[i]);

	printf("\ndifferent elements: %d\n", diffElements);
	getchar();
	return 0;
}
