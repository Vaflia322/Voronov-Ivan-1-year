#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> numbers(string str) {
	vector<char> numbers;
	for (char n : "0123456789") {
		for (char c : str) {
			if (n == c) {
				numbers.push_back(c);
			}
		}
	}
	if (str.length() == 0) {
		cout << "chisel net";
	}
	return numbers;
}

int perebor(vector<char> numbers) {
	int max_sum = 0;
	for (char n : "0123456789") {
		int sum = 0;
		for (char c : numbers) {
			if (n == c) {
				sum++;
			}
		}
		max_sum = max(sum, max_sum);
	}
	return max_sum;
}
char simvol(vector<char> numbers) {
	char chislo;
	int max_sum = perebor(numbers);
	for (char n : "0123456789") {
		int sum = 0;
		for (char c : numbers) {
			if (n == c) {
				sum++;
			}
		}
		if (sum == max_sum) {
			chislo = n;
		}
	}
	return chislo;
}

int main() {
	string stroka; cin >> stroka;
	vector<char> chisla;
	chisla = numbers(stroka);
	cout << "chislo " << simvol(chisla) << ' ' << perebor(chisla) << " raza";
	return 0;
}
