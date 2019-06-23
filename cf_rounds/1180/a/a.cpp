#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 1;
	int x = 4;
	for (int i = 2; i <= n; ++i) {
		ans += x;
		x += 4;
	}
	cout << ans << endl;
	return 0;
}
