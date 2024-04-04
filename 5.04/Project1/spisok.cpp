#include <iostream>

using namespace std;

struct Node {
    int element;
    Node* next_element;
    Node() {}
    Node(int element) {
        this->element = element;
    }
};

class Linked_list {
    Node head;
    Node tail;
    bool Empty() {
        return head.next_element == nullptr;
    }

public:
    Linked_list() {
        head.next_element = nullptr;
        tail.next_element = nullptr;
    }

    void appendElement(int element) {
        Node* temp = &head;
        Node* apnode = new Node(element);
        int flag = 0;
        if (Empty()) {
            head.next_element = apnode;
            tail.next_element = apnode;
        }
        else {
            while (flag == 0) {
                if (temp->next_element != nullptr && temp != nullptr && temp->next_element->element != NULL) {
                    int a = temp->next_element->element;
                    if (temp->element <= element && element <= a) {
                        apnode->next_element = temp->next_element;
                        temp->next_element = apnode;
                        flag++;
                    }
                }
                if (temp->next_element != nullptr) {
                    temp = temp->next_element;
                }
                else {
                    tail.next_element = apnode;
                    tail.next_element = apnode;
                    flag++;
                }
            }
        }
    }

    void printlist() {
        Node* current = head.next_element;
        cout << "List: ";
        while (current->next_element != nullptr) {
            cout << current->element << " ";
            current = current->next_element;
        }
        cout << endl;
    }
};

int main() {
    Linked_list list;
    list.appendElement(3);
    for (int i = 0; i < 7;i++) {
        list.appendElement(i);
    }
    list.printlist();
    return 0;
}

