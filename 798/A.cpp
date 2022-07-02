#include <bits/stdc++.h>
using namespace std;


int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		string a, b, c;
		cin >> a;
		cin >> b;
		vector<char> va(a.begin(), a.end());
		vector<char> vb(b.begin(), b.end());
		vector<char> vc;
		sort(va.begin(), va.end());
		sort(vb.begin(), vb.end());
		int aid = 0, bid = 0;
		int ctra = 0, ctrb = 0;
		while ((aid < n) && (bid < m)) {
			if (va[aid] < vb[bid]) {
				if (ctra < k) {
					vc.push_back(va[aid]);
					aid++;
					ctra++;
					ctrb = 0;
				} else {
					vc.push_back(vb[bid]);
					bid++;
					ctrb++;
					ctra = 0;
					
				}
			} else {
				if (ctrb < k) {
					vc.push_back(vb[bid]);
					bid++;
					ctrb++;
					ctra = 0;
				} else {
					vc.push_back(va[aid]);
					aid++;
					ctra++;
					ctrb = 0;
					
				}
			}
		}
		for (int i = 0; i < vc.size(); i++) {
			cout << vc[i];
		}
		cout << endl;
	}
	return 0;
}

