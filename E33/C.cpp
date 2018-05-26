#include <iostream>
using namespace std;

int main () {
	int n, m, x, y;
	
	cin >> n >> m;
	int ar[n+1];
	int arr[n+1][n+1];
	for (int i = 1; i <= n; i++) {
		cin >> ar[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}
	return 0;
}
