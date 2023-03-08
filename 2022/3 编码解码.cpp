#include <bits/stdc++.h>

using namespace std;

using LL = long long;


int main() {
	map<char, int> MP;
	for (int i = 0; i < 26; i++) {
		MP['A' + i] = 10 + i;
	}
	for (int i = 0; i < 10; i++) {
		MP['0' + i] = i;
	}
	for (int i = 0; i < 26; i++) {
		MP['a' + i] = -11 - i;
	}

	MP['!'] = -1;
	MP['@'] = -2;
	MP['#'] = -3;
	MP['$'] = -4;
	MP['%'] = -5;
	MP['?'] = -6;
	MP['&'] = -7;
	MP['*'] = -8;
	MP['('] = -9;
	MP[')'] = -10;

	string str;
	cin >> str;
	cout << str.size() << endl;
	for (int i = 0; i < str.size() - 1; i++) {
		cout << MP[str[i]] << " ";
	}
	cout << MP[str[str.size() - 1]] << endl;

	return 0;
}
