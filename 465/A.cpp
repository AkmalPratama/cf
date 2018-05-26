#include <iostream>
#include <vector>
using namespace std;

int main () {
	int n;
	vector<int> v;
	cin >> n;
	for (int i = 1; i < n; i++) {
		if ((n % i) == 0) {
			v.push_back(i);
		}
	}
	cout << v.size() << endl;
	return 0;
}
