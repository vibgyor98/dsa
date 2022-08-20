#include <bits/stdc++.h>
using namespace std;

#define ll		long long int
#define ld		long double
#define mod     1000000007
#define inf     1e18

void print(int n, string name) {
	if (n == 0) return;
	cout << name << "\n";
	print(n - 1, name);
}

int main() {
	clock_t begin = clock();
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Start code here....
	int n;
	cin >> n;
	string name;
	cin >> name;
	print(n, name);


#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
	return 0;
}