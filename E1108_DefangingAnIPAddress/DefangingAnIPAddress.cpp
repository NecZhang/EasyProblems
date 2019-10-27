#include <iostream>

using namespace std;

class Solution {
public:
	string defangIPaddr(string address) {
		int pos;
		pos = address.find_first_of('.');
		while (pos != string::npos) {
			address.insert(pos, "[");
			address.insert(pos + 2, "]");
			pos = address.find_first_of('.', pos + 2);
		}
		return address;
	}
};

int main() {

	string ipAddress;
	cout << "Enter an IP address: ";
	cin >> ipAddress;
	Solution defangIP;
	cout << "Defanging IP address is " << defangIP.defangIPaddr(ipAddress);

	return 0;
}