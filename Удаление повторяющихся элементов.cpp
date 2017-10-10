#include "stdafx.h"
#include <iostream>
using namespace std;
void DeleteDuplicates(int *A, int N) {
	int start, start1, pr;
	for (start = 0; start < N; start++) {
		for (start1 = start + 1; start1 < N; start1++) {
			if (*(A+start1) == *(A+start)) {
				for (pr = start1; pr < N - 1; pr++) {
					*(A + pr) = *(A + pr + 1);
				}
				N--;
				if (*(A + start1) == *(A + start)) start1--;
			}
		}
	}
	for (start = 0; start < N; start++)
		cout << *(A + start) << " ";
	delete[]A;
}
int main()
{
	int N, i;
	int *A;
	cout << "Vvedite N: ";
	cin >> N;
	A = new int[N];
	cout << "Vvedite " << N << " elementov: ";
	for (i = 0; i < N; i++)
		cin >> *(A+i);
	DeleteDuplicates(A, N);
    return 0;
}

