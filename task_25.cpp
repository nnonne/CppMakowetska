#include<iostream>
#include <fstream>
#include <string>

int main() {
	std :: fstream f1;
	std :: string data;
	f1.open("1.txt");
	std :: fstream f2;
	f2.open("2.txt", std :: ios::out);

	std :: string arr[] = { "zero","one","two","three","four","five","six", "seven", "eight", "nine"};
	if (!f1.bad()) {
		while (!(f1 >> data).eof()) {
			if (f1.bad()) {
				std :: cerr << "невиправна помилка читання" << std :: endl;
				return 2;
			}
			std :: cout << data << "; ";
			for (int i = 0; i < 11; ++i) {
				if (data.find(arr[i]) != std :: string::npos) {
					int m = data.find(arr[i]);

					data.replace(m, m + arr[i].size(), std :: to_string(i));
				}
			}
			std :: cout << data << std :: endl;
			f2 << data << " ";
		}

	}
	f1.close();
	f2.close();
}
