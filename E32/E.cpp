#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i] %= m;
	}
	int max = 0;
	for (int size = 1; size <= n; size++) {
		int buf = 0;
		for (int j = 0; j <= (n - size); j++) {
			buf += a[j];
		}
		buf %= m;
		max = (max < buf) ? buf : max;
	}
	cout << max << endl;
}
