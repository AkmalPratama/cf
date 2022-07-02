#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int arrived[n];
	for (int i = 0; i < n; i++) {
		arrived[i] = a[i] - i;
		if (arrived[i] < 0) {
			arrived[i] = i;
		} else {
			if (arrived[i] % n != 0) {
				arrived[i] /= n;
				arrived[i] += 1;
			} else {
				arrived[i] /= n;
			}
			arrived[i] *= n;
			arrived[i] += i;
		}
	}
	int min = arrived[0], idxMin = 0;
	for (int i = 0; i < n; i++) {
		if (arrived[i] < min) {
			min = arrived[i];
			idxMin = i;
		}
	}
	cout << idxMin+1 << endl;
	return 0;
}
