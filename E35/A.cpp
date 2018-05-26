#include <iostream>
#include <vector>
using namespace std;

int main () {
	int n, min = 1000000001, min_id;
	vector<int> v;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < min) {
			min = a[i];
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == min) {
			v.push_back(i);
		}
	}
	min_id = v[1] - v[0];
	for (int i = 1; i < v.size(); i++) {
		if (min_id > (v[i] - v[i-1])) {
			min_id = v[i] - v[i-1];
		}
	}
	cout << min_id << endl;
	return 0;
}
