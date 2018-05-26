#include <iostream>
#include <vector>
using namespace std;

int main () {
	int n;
	cin >> n;
	int v[n];
	int t[n];
	int sum;
	vector<int> ve;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> t[i];
		sum = 0;
		for (int j = 0; j <= i; j++) {
			int init = v[j];
			v[j] -= t[i];
			if (v[j] < 0) {
				v[j] = 0;
			}
			
			sum += (init - v[j]);
		}
		ve.push_back(sum);
	}
	cout << ve[0];
	for (int i = 1; i < ve.size(); i++) {
		cout << " " << ve[i];
	}
	cout << endl;
	return 0;
}
