#include <iostream>

using namespace std;

int cheak_head = 0;

struct Node {
	int value;
	Node* next_Node;
	Node(){
		next_Node = nullptr;
	}
	Node(int element) {
		value = element;
		next_Node = nullptr;
	}
};

class Linked_list {
	Node head;
public:
	Linked_list() {
		Node head();
	}
	Linked_list(int el) {
		head.value = el;
		head.next_Node = nullptr;
		cheak_head++;
	}
	void append(int el) {
		Node* temp = &head;
		Node ttemp = head;
		int flag = 0;
		Node* ad_node = new Node;
		ad_node->value = el;
		if (el < head.value) {
			head = *ad_node;
			head.next_Node = &ttemp;
			return;
		}
		if (temp->next_Node == nullptr and cheak_head == 0) {
			head.value = el;
			cheak_head++;
		}
		while (temp->next_Node != nullptr) {
			if (temp->next_Node->value > el) {
				ad_node->next_Node = temp->next_Node;
				temp->next_Node = ad_node;
				flag++;
				return;
			}
			else {
				temp = temp->next_Node;
			}
		}
		temp->next_Node = ad_node;
	}
	void print() {
		Node* temp = &head;
		cout << temp->value << ' ';
		while (temp->next_Node != nullptr) {
			cout << temp->value << ' ';
			temp = temp->next_Node;
		}
	}
	Linked_list operator = (Linked_list list) {
		head = list.head;
		Node* temp_list = &list.head;
		head.next_Node = temp_list->next_Node;
		Node* temp = &head;
		while (temp_list->next_Node != nullptr) {
			temp = temp_list->next_Node;
			temp->value = temp_list->value;
			temp_list = temp_list->next_Node;
		}
	}
	Linked_list operator == (Linked_list list) {
		Node* temp_list = &list.head;
		Node* temp = &head;
		while (temp_list->next_Node != nullptr) {
			if (temp->value != temp_list->value) {
				return false;
			}
			temp = temp->next_Node;
			temp_list = temp_list->next_Node;
		}
		return true;
	}
	Linked_list operator * (int n) {
		Node* temp = &head;
		while (temp->next_Node != nullptr) {
			temp->value *= n;
			temp = temp->next_Node;
		}
	}
	Linked_list operator [] (int n) {
		Node* temp = &head;
		for (int i = 0;i < n-1;i++) {
			temp = temp->next_Node;
		}
		return temp->value;
	}
};

int main() {
	Linked_list l(5);
	l.append(7);
	l.append(1);
	l.append(2);
	l.append(-1);
	l.append(3);
	l.append(10);
	l.print();
}