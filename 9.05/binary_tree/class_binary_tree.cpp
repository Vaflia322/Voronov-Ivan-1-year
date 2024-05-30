#include <iostream>

using namespace std;

struct Node {
	int value;
	Node* pLeft;
	Node* pRight;
};

class Binary_tree {
	Node* root;
public:
	Binary_tree(int a) {
		root = new Node;
		root->value = a;
		root->pLeft = nullptr;
		root->pRight = nullptr;
	}
	void add(int element) {
		Node *ntemp = new Node;
		ntemp->value = element;
		ntemp->pRight = nullptr;
		ntemp->pLeft = nullptr;
		
		Node* temp = root;
		int flag = 0;
		while (flag != 1) {
			if (element > temp -> value) {
				if (temp->pRight == nullptr) {
					temp->pRight = ntemp;
					flag++;
				}
				else {
					temp = temp->pRight;
				}
			}
			else if (element < temp -> value) {
				if (temp->pLeft == nullptr) {
					temp->pLeft = ntemp;
					flag++;
				}
				else {
					temp = temp->pLeft;
				}
			}
		}
	}
	bool search(int element) {
		Node* temp = root;
		int flag = 0;
		while (flag == 0) {
			if (element > temp->value) {
				if (temp->pRight == nullptr) {
					flag++;
				}
				else {
					temp = temp->pRight;
				}
			}
			else if (element < temp->value) {
				if (temp->pLeft == nullptr) {
					flag++;
				}
				else {
					temp = temp->pLeft;
				}
			}
			else if (element == temp->value) {
				return true;
			}
		}
		return false;
	}
	void print() {
		printRecursive(root);
	}
	void printRecursive(Node* node) {
		if (node == nullptr) {
			return;
		}
		cout << node->value << " ";
		printRecursive(node->pLeft);
		printRecursive(node->pRight);
	}
	Node* max_in_min(Node* start) {
		Node* temp = start->pLeft;
		while (temp->pRight->pRight != nullptr) {
			temp = temp->pRight;
		}
		return temp;
	}
	void delete_element(int element) {
		Node* temp = root;
		if (search(element)) {
			while (element != temp->value){
				if (element > temp->value) {
					if (temp->pRight != nullptr) {
						temp = temp->pRight;
					}
				}
				else if (element < temp->value) {
					if (temp->pLeft != nullptr) {
						temp = temp->pLeft;
					}
				}
				else if (element == temp->value) {
					Node* deleted_el = max_in_min(temp);
					temp->value = deleted_el->value;
					deleted_el->value = NULL;
					deleted_el->pLeft = nullptr;
					deleted_el->pRight = nullptr;
				}
			}
			if (element == temp->value) {
				Node* deleted_el = max_in_min(temp);
				temp->value = deleted_el->pRight->value;
				deleted_el->pRight = nullptr;
			}
		}
		else {
			cout << "there is no such element" << endl;
		}
	}
	int getMin() {
		Node* temp = root;
		while (temp->pLeft!=nullptr) {
			temp = temp->pLeft;
		}
		return temp->value;
	}
	int getMax() {
		Node* temp = root;
		while (temp->pRight != nullptr) {
			temp = temp->pRight;
		}
		return temp->value;
	}
	bool isBalanced() {
		return isBalancedHelper(root) != -1;
	}

private:
	int isBalancedHelper(Node* node) {
		if (node == nullptr) {
			return 0;
		}
		int leftHeight = isBalancedHelper(node->pLeft);
		if (leftHeight == -1) {
			return -1;
		}
		int rightHeight = isBalancedHelper(node->pRight);
		if (rightHeight == -1) {
			return -1;
		}
		if (abs(leftHeight - rightHeight) > 1) {
			return -1;
		}
		return max(leftHeight, rightHeight) + 1;
	}
};

int main() {
	Binary_tree tree(10);
	tree.add(5);
	tree.add(7);
	tree.add(6);
	tree.add(8);
	tree.add(1);
	tree.add(2);
	tree.add(12);
	tree.add(16);
	if (tree.search(10)) {
		cout << "Yes"<<endl;
	}
	tree.print();
	tree.delete_element(5);
	tree.print();
	int a = tree.getMax();
	int b = tree.getMin();
	cout << a << ' ' << b << endl;
	if (tree.isBalanced()) {
		cout << "Yes";
	}
	return 0;
}