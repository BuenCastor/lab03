#include "stdafx.h"
using namespace std;

int main()
{
	
	const int sz = 3;
	int t = 0, i, arr[sz][sz];
	for (int i = 0; i < sz; ++i)
		for (int j = 0; j < sz; ++j)
			cin >> arr[i][j];
	for (t = 0; t < sz; ++t) {
		for (i = 0; i < sz; ++i)
			cout << arr[t][i] << "  ";

		cout << endl;
		
	}
	if (arr[1][0] > arr[2][0] && arr[2][0] > arr[2][1])
		cout << "\n" << "min: " << arr[2][1] << "\n";
	else if (arr[1][0] <= arr[2][0] && arr[1][0] <= arr[2][1])
		cout << "\n" << "min: " << arr[1][0] << "\n";
	else if (arr[2][0] <= arr[2][1] && arr[2][0] <= arr[1][0])
		cout << "\n" << "min: " << arr[2][0] << "\n";
	else if (arr[2][1] <= arr[1][0] && arr[2][1] <= arr[2][0]) 
		cout << "\n" << "min: " << arr[2][1] << "\n";
	     
	system("pause");
	return 0;
}

