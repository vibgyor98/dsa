
#include <bits/stdc++.h>
using namespace std;

#define ll		long long int
#define ld		long double
#define mod     1000000007
#define inf     1e18

string solve(string num1, string num2) {
	//access last digit of num1
	int lastDigitOfNum1 = num1.size() - 1;
	//access last digit of num2
	int lastDigitOfNum2 = num2.size() - 1;
	//for carry
	int carry = 0;
	string ans = "";

	//traverse num1 and num2 till leftmost digit and till carry > 0
	while (lastDigitOfNum1 >= 0 || lastDigitOfNum2 >= 0 || carry) {
		long sum = 0;
		//convert char into int and add it to sum
		//for num1
		if (lastDigitOfNum1 >= 0) {
			sum += num1[lastDigitOfNum1] - '0';
			lastDigitOfNum1--;
		}
		//convert char into int and add it to sum
		//num2
		if (lastDigitOfNum2 >= 0) {
			sum += num2[lastDigitOfNum2] - '0';
			lastDigitOfNum2--;
		}
		//add carry to sum
		sum += carry;
		//carry is always the leftmost digit of a number
		//for new generated carry afetr sum at given place
		carry = sum / 10;

		/*concatenate last digit of sum, after converting
		it into string using to_string function*/
		ans += to_string(sum % 10);
	}

	/*as the required sum  is obtained in reverse manner,
	reverse the sum to obtain the actual answer*/
	reverse(ans.begin(), ans.end());
	return ans;
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

	string num1;
	string num2;

	cin >> num1 >> num2;

	cout << solve(num1, num2);

#ifndef ONLINE_JUDGE
	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
	return 0;
}