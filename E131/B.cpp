#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	bool b[n+1];
	vector<int> v;
	for (int i = 1; i <= n; i++) {
		b[i] = true;
	}
	int ptr = 1;
	while(ptr <= n) {
		if (b[ptr]) {
			int i = ptr;
			while (i <= n) {
				v.push_back (i);
				b[i] = false;
				i *= 2;
			}
		}
		ptr++;
	}
	cout << 2 << endl;
	for (int x: v) {
		cout << x << " ";
	}
	cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
    	solve();
	}
    return 0;
}
