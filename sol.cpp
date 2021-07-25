#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b;
		// follow the conditions from the problem statement
		cin >> a >> b;
		if (a + b < 3) {
			cout << 1;
		} else if (a + b <= 10) {
			cout << 2;
		} else if (a + b <= 60) {
			cout << 3;
		} else {
			cout << 4;
		}
		cout << '\n';
	}
	return 0;
}
