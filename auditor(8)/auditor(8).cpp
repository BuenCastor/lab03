#include "stdafx.h"
#define SPLIT_ROW(i, j) (i) < (j) - 1 ? '\t' : '\n'
int main()
{

	const int M = 3, N = 4;
	float mat[M][N];
	srand(time(NULL));
	int i;
	for (i = 0; i < M; ++i)
	{
		int j;

		for (j = 0; j < N; ++j)
		{

			mat[i][j] = rand() % 100;
			printf("%f%c", mat[i][j], SPLIT_ROW(j, N));
		}
	}
	getchar();
	return 0;
}