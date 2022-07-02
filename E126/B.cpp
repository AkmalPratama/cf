#include <bits/stdc++.h>
using namespace std;

int check(int x, int i, int j) {
	return (((x + i) % 32768) * (int)pow(2, j)) % 32768;
}

int main() {
	vector<int> v;
    int t;
    cin >> t;
    while (t--) {
    	int n;
    	cin >> n;
    	int opt = 16;
		for (int i = 0; i <= 15; i++) {
			for (int j = 0; j <= 15; j++) {
				if ((i+j) > 15) {
					break;
				}
				if (check(n, j, i) == 0) {
					opt = (i + j) < opt ? (i + j) : opt;
				}
			}
		}
		v.push_back(opt);
	}
	for (int i = 0; i < v.size(); i++) {
		if (i == 0) {
			cout << v[i];
		} else {
			cout << " " << v[i];
		}
	}
	cout << endl;
    return 0;
}
