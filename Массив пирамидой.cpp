#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
void Pyr(int N) {
	int i, j, nach=0, kon=N-1, h=1;
	int **m = new int*[N];
	for (int i = 0; i < N; i++)
		m[i] = new int[N];
	while (nach <= kon) {
		for (i = nach; i <= kon; i++) {
			*(*(m + nach) + i) = h;
			*(*(m + kon) + i) = h;
		}
		for (i = nach+1; i < kon; i++) {
			*(*(m + i) + nach) = h;
			*(*(m + i) + kon) = h;
		}
		h++;
		nach++; kon--;
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			cout << setw((N/2)/10+2) << *(*(m + i) + j);
		cout << endl;
	}
	delete[]m;
}
int main()
{
	int N;
	cout << "Vvedite N: ";
	cin >> N;
	Pyr(N);
	system("pause");
    return 0;
}

