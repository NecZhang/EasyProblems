#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	int numJewelsInStones(string J, string S) {
		int count = 0;

		int lenJ = J.length();
		int lenS = S.length();
		for (int i = 0; i < lenJ; i++) {
			for (int j = 0; j < lenS; j++) {
				if (J[i] == S[j]) {
					count++;
				}
			}
		}

		return count;
	}
};

int main() {

	string J;
	string S;
	cout << "J = ";
	cin >> J;
	cout << "S = ";
	cin >> S;
	Solution sltn;
	cout << sltn.numJewelsInStones(J, S);

	return 0;
} 