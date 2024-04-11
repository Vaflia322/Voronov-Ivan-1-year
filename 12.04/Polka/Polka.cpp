#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Polka {
	int size;
	int capacity;
	int* polka;
public:
	Polka(){
		size = 0;
		capacity = 1;
		polka = new int[capacity];
	}
	void extension() {
		int* arr = new int[capacity * 2];
		capacity *= 2;
		for (int i = 0; i < capacity / 2;i++) {
			arr[i] = polka[i];
		}
		polka = arr;
	}
	void append_right(int number_book) {
		if (size == capacity) {
			extension();
		}
		polka[size] = number_book;
		size ++;
	}
	void append_left(int number_book) {
		if (size == capacity) {
			extension();
		}
		for (int i = size; i > 0; i--) {
			polka[i] = polka[i - 1];
		}
		polka[0] = number_book;
		size ++;
	}
	int pop_right() {
		int book;
		book = polka[size - 1];
		size--;
		return book;
	}
	int pop_left() {
		int book;
		book = polka[0];
		for (int i = 0; i < size - 1;i++) {
			polka[i] = polka[i + 1];
		}
		size--;
		return book;
	}
};

int main() {
	string result;
	Polka polka;
	ofstream out("out.txt");
	ifstream in("in.txt");
	string line;
	getline(in, line);
	int n = stoi(line);
	for (int i = 0;i < n;i++) {
		getline(in, line);
		int len_str = line.length();
		if (line == "3") {
			result += to_string(polka.pop_left());
			result += ' ';
		}
		else if (line == "4") {
			result += to_string(polka.pop_right());
			result += ' ';
		}
		else if (line[0] == '1') {
			int temp = stoi(line.substr(2, len_str - 2));
			polka.append_left(temp);
		}
		else if (line[0] == '2') {
			int temp = stoi(line.substr(2, len_str - 2));
			polka.append_right(temp);
		}
	}
	out << result;
	return 0;
}