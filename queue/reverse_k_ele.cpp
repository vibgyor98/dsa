#include <bits/stdc++.h>
using namespace std;

#define ll		long long int
#define ld		long double
#define mod     1000000007
#define inf     1e18

void solve(vector<int> A, int size, int B) {
	int start = B - 1;
	vector<int> ans(size);
	do {
		ans.push_back(A[start]);
		start--;
	} while (start > 0);

	//checking if B is not equal to the size of array
	if (B != size) {
		ans.push_back(A[B]);
		for (int i = B + 1; i < size; i++) {
			ans.push_back(A[i]);
		}
	}

	for (int i = 0; i < size; i++) {
		cout << ans[i] << " ";
	}
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

	int K;
	cin >> K;
	int arr_size;
	cin >> arr_size;
	vector<int> A;
	for (int i = 0; i < arr_size; i++) {
		int num;
		cin >> num;
		A.push_back(num);
	}

	solve(A, arr_size, K);


#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
	return 0;
}