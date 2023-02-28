#include <bits/stdc++.h>
using namespace std;

#define ll		long long int
#define ld		long double
#define mod     1000000007
#define inf     1e18

class Node() {
	int data;
	Node next;

	Node(int x) {
		data = x;
		next = NULL;
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

	//for creating 3 node
	int num;
	cin >> num;
	Node head = new Node(num);
	Node temp = head;
	for (int i = 0; i < 3; i++) {
		cin >> num;
		head.next = new Node(num);
		head = head.next;
	}
	return temp;


#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
	return 0;
}