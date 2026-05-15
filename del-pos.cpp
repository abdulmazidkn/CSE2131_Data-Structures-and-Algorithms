#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* head = NULL;

void display() {
    Node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data;
        if (ptr->next != NULL) cout << ", ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    Node* n1 = new Node(); n1->data = 1;
    Node* n2 = new Node(); n2->data = 2;
    Node* n3 = new Node(); n3->data = 3;
    Node* n4 = new Node(); n4->data = 4;
    Node* n5 = new Node(); n5->data = 5;

    head = n1;
    n1->next = n2; n2->next = n3; n3->next = n4; n4->next = n5; n5->next = NULL;

    cout << "Before: "; display();

    Node* temp = head;
    for (int i = 1; i < 2; i++) temp = temp->next;

    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;

    cout << "After:  "; display();

    return 0;
}
