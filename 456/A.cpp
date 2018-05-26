#include <iostream>
using namespace std;

int main () {
	long long a, b;
	long long reqA = 0, reqB = 0;
	long long x, y, z;
	
	cin >> a >> b;
	cin >> x >> y >> z;
	
	reqA += ((2 * x) + y);
	reqB += ((3 * z) + y);
	
	long long needA = reqA - a;
	long long needB = reqB - b;
	
	long long needAll = 0;
	
	if (needA > 0) {
		needAll += needA;
	}
	if (needB > 0) {
		needAll += needB;
	}
	
	cout << needAll << endl;
	return 0;
}
