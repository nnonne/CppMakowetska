#include <iostream>
#include <string>
using namespace std;
int main() {
	string s = "hgfe jhg egfgreiro iiei eiej", s2;
	char c;
	c = ' ';

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			s2.push_back(s[i]);
			c = ' ';
			continue;
		}
		if (c == ' ' && s[i] != ' ') {
			c = s[i]; continue;
		}
		if (s[i] != c && c != ' ') { s2.push_back(s[i]); }

	}
	cout << s2;
}
