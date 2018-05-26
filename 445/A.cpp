#include <iostream>
using namespace std;

int arr[5];

int total(int a, int b, int c) {
	return arr[a] + arr[b] + arr[c];
}

int main () {
	int sum1, sum2;
	bool b = false;
	for (int i = 0; i < 6; i++) {
		cin >> arr[i];
	}
	if ((arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5]) % 2 == 1) {
		cout << "NO" << endl;
	} else {
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 6; j++) {
				for (int k = 0; k < 6; k++) {
					if ((i != j) && (j != k) && (i != k)) {
						sum1 = total(i, j, k);
						for (int m = 0; m < 6; m++) {
							if ((m != i) && (m != j) && (m != k)) {
								sum2 += arr[m];
							}
						}
						if (sum1 == sum2) {
							b = true;
						}
					}
					sum1 = 0;
					sum2 = 0;
				}
			}
		}
		if (b) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}		
	}
	return 0;
}
