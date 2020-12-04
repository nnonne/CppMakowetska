#include<iostream>
#include <fstream>


int main() {
	std :: fstream f1;
	std :: string data;
	f1.open("1.txt");

	std :: string sum_words = "";
	if (!f1.bad()) {
		while (!(f1 >> data).eof()) {
			if (f1.bad()) {
				std :: cerr << "невиправна помилка читання" << std :: endl;
				return 2;
			}
			std :: cout << data << std :: endl;
			sum_words += data;
		}

	}
	f1.close();
	f1.open("1.txt");
	int freq[26] = { 0, };

	freq['z' - 'a'] = 0;
	if (!f1.bad()) {
		while (!(f1 >> data).eof()) {
			if (f1.bad()) {
				std :: cerr << "невиправна помилка читання" << std :: endl;
				return 2;
			}
			for (int i = 0; i < data.size(); ++i) {
				char c = data[i];
				for (int j = 0; j < sum_words.size(); ++j) {
					if (c == sum_words[j]) {
						freq[c - 'a']++;
					}
				}
			}
			for (int i = 0; i < 26; i++) {
				std :: cout << static_cast<char>('a' + i) << ":" << freq[i] << std :: endl;
				freq[i] = 0;
			}
			std :: cin.get();
		}
	}
	f1.close();
	for (int i = 0; i < 26; i++) {
		std :: cout << static_cast<char>('a' + 1) << ":" << freq[i] << std :: endl;
	}
}
