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

    // Insert before node with data 4
    Node* temp = head;
    while (temp->next != NULL) {
        if (temp->next->data == 4) {
            Node* newNode = new Node();
            newNode->data = 99;
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }

    // Insert after node with data 4
    temp = head;
    while (temp != NULL) {
        if (temp->data == 4) {
            Node* newNode = new Node();
            newNode->data = 88;
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }

    cout << "After:  "; display();

    return 0;
}
