#include <iostream>

using namespace std;

class Stack {
	int* stack;
	int capacity;
	int size;
	int max_element;
	void extension() {
		size *= 2;
		int* temparray = new int[size];
		for (int i = 0; i < capacity;i++) {
			temparray[i] = stack[i];
		}
		stack = temparray;
	}
	bool isempty() {
		return stack[0] == NULL;
	}
public:
	Stack(){
		int* array = new int[2];
		stack = array;
		capacity = 0;
		size = 2;
		max_element = -2147483648;
	}
	void push(int el) {
		if (capacity == size) {
			extension();
		}
		max_element = max(max_element, el);
		stack[capacity] = el;
		capacity++;
	}
	int pop() {
		int temp = stack[capacity-1];
		stack[capacity-1] = NULL;
		capacity--;
		return temp;
	}
	void print_stack() {
		cout << "Stack: ";
		for (int i = 0;i < capacity;i++) {
			cout << stack[i] << ' ';
		}
	}
	int GetMaxElement() {
		return max_element;
	}
};

int main() {
	Stack s;
	for (int i = 0; i < 10;i++) {
		s.push(i);
	}
	for (int i = 30; i >= 10;i--) {
		s.push(i);
	}
	int a = s.pop();
	int b = s.GetMaxElement();
	cout <<a << ' ' << b<<endl;
	
	s.print_stack();
}