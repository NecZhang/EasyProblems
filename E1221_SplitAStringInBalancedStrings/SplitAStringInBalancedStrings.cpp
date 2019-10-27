#include <iostream>

using namespace std;

class Solution {
public:
	int balancedStringSplit(string s) {
		int len = s.length();
		int result = 0;
		int CR = 0;
		int CL = 0;
		int notRL = 0;

		for (char ch : s) {
			if (ch != 'R' && ch != 'L') {
				notRL++;
			}
		}

		if (notRL == 0) {
			if (len >= 2 && len <= 1000) {
				for (char ch : s) {
					switch (ch) {
					case 'R':
						CR++;
						break;
					case 'L':
						CL++;
						break;
					default:
						;
					}

					if (CR == CL) {
						result++;
						CR = 0;
						CL = 0;
					}
				}

				return result;
			}
			else {
				return 0;
			}
		}
		else {
			return 0;
		}
	}
};


int main() {

	string b_s;
	cout << "Enter a balanced string: ";
	cin >> b_s;

	Solution stringSplit;
	cout << "The maximum amount of balanced string is " << stringSplit.balancedStringSplit(b_s);
	
	return 0;
}