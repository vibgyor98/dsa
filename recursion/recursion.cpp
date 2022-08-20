#include <bits/stdc++.h>
using namespace std;

#define ll		long long int
#define ld		long double
#define mod     1000000007
#define inf     1e18

//print N to 1
void printN_to_1(int num, int n) {
	if (num < 1) return;
	cout << num << "\n";
	printN_to_1(num - 1, n);
}

//print 1 to N
void print1_to_N(int num, int n) {
	if (num > n) return;
	cout << num << "\n";
	print1_to_N(num + 1, n);
}

//print name N times
void printName(int n, string name) {
	if (n == 0) return;
	cout << name << "\n";
	printName(n - 1, name);
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

	//print name N times
	int n;
	cin >> n;
	string name;
	cin >> name;
	printName(n, name);

	//line break for next output
	cout << "\n";

	//print 1 to N
	int m;
	cin >> m;
	print1_to_N(1, m);

	//line break for next output
	cout << "\n";

	//print N to 1
	int p;
	cin >> p;
	printN_to_1(10, p);


#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
	return 0;
}