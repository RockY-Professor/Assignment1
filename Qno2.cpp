#include <iostream>
#include <string>
using namespace std;
int main() {

	cout << "Enter Your First String User! " << '\n';
	string myfirststring;
	getline(cin, myfirststring);
	cout << "Enter Your Second String User! " << '\n';
	string mysecondstring;
	getline(cin, mysecondstring);
	if (myfirststring == mysecondstring || mysecondstring == myfirststring) {

		cout << "Yes,Both Strings are same User! " << '\n';
	}
	else {

		cout << "No,Both Strings are not same User! " << '\n';
	}

	return 0;
}
