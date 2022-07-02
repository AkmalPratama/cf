#include <bits/stdc++.h>

using namespace std;

struct score {
	int sum;
	int id;
};

bool comp(score l, score r) {
	return l.sum > r.sum;
}

int main () {
	int n;
	
	cin >> n;
	score a[n];
	for (int i = 0; i < n; i++) {
		int q, w, e, r;
		cin >> q >> w >> e >> r;
		a[i].sum = q + w + e + r;
		a[i].id = i;
	}
	int sumSmith = a[0].sum;
	sort(a, a+n, comp);
	vector<int> v;
	for (int i = 0; i < n; i++) {
		if (a[i].sum == sumSmith) {
			v.push_back(i);
		}
	}
	cout << v[0]+1 << endl;
	return 0;
}
