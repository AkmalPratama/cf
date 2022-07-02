#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, cnt = 0;
	
	cin >> n;
	string a, b;
	cin >> a >> b;
	int bin[4] = {0};
	for (int i = 0; i < n; i++) {
		if (a[i] == '0') {
			if (b[i] == '0') {
				bin[0]++;
			} else {
				bin[1]++;
			}
		} else {
			if (b[i] == '0') {
				bin[2]++;
			} else {
				bin[3]++;
			}
		}
	}
	cnt += bin[1] * bin[2];
	cnt += bin[0] * (bin[2] + bin[3]);
	cout << cnt << endl;
	return 0;
}

