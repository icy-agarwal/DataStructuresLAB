#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

bool isCircular(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return false;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }
    return false;
}

void deleteList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

int main() {
    cout << "1: Circular Linked List\n";

    Node* head1 = new Node(2);
    Node* n2 = new Node(4);
    Node* n3 = new Node(6);
    Node* n4 = new Node(7);
    Node* n5 = new Node(5);

    head1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = head1; 

    cout << "Input: 2 -> 4 -> 6 -> 7 -> 5 -> 2 (cycle back to head)\n";
    if (isCircular(head1))
        cout << "Result: True (This is a circular linked list)\n";
    else
        cout << "Result: False (This is not a circular list)\n";

    n5->next = nullptr;
    deleteList(head1);

   

    return 0;
}
