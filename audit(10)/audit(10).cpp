#include "stdafx.h"

int main() {

	const char CSmile[] = "\n"
		" 0 0 1 1 1 1 0 0\n"
		" 0 1 0 0 0 0 1 0\n"
		" 1 0 1 0 0 1 0 1\n"
		" 1 0 0 0 0 0 0 1\n"
		" 1 0 1 0 0 1 0 1\n"
		" 1 0 0 1 1 0 0 1\n"
		" 0 1 0 0 0 0 1 0\n"
		" 0 0 1 1 1 1 0 0\n";
	const char Artem[] = "\n"
		"  *  **  *** *** *       *\n"
		" * * * *  *  *   * *   * *\n"
		" *** *    *  *** *   *   *\n"
		" * * *    *  *   *       *\n"
		" * * *    *  *** *       *\n";
	printf("%s", CSmile);
	printf("%s", Artem);
	getchar();
	return 0;
}



