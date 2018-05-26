#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void Partition(int T[], int low, int high, int* piv) {
	int pivot = T[high];
	int i = low - 1; 
	for(int j = low; j < high ; j++) {
		if (T[j] <= pivot) {
			i++;
			swap(&T[i], &T[j]);
		}
	}
	swap(&T[i + 1], &T[high]);
	*piv = i + 1;
}

void QuickSort(int T[], int i, int j) {
	int piv;
	if (i < j) {
		Partition(T, i, j, &piv);
		QuickSort(T, i, piv - 1);
		QuickSort(T, piv + 1, j);
	}
}


int main () {
	int n;
	cin >> n;
	int a[n];
	bool cont[n];
	int visBox = n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cont[i] = false;
	}
	QuickSort(a, 0, n-1);
	for (int i = 0; i < (n-1); i++) {
		for (int j = 1; j < n; j++) {
			if ((a[i] < a[j]) && a[i] != -99 && a[j] != -99 && cont[j] == false) {
				a[i] = -99;
				cont[j] = true;
				visBox--;/*
				cout << i << " " << j << endl;
				for (int k = 0; k < n; k++) {
					cout << a[k] << " ";
				}
				cout << endl;*/
				continue;
			}
		}
	}
	cout << visBox << endl;
	return 0;
}
