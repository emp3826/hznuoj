#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string str;
	int n;
	cin >> n;
	getchar();
	for (int i = 0; i < n; ++i) {
		getline(cin, str);
		reverse(str.begin(), str.end());
		cout << str << endl << endl;
	}
	return 0;
}