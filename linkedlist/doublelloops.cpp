#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = nullptr;
    }

    void display() {
        Node* temp = head;

        while (temp) {
            cout << temp->data << ' ';
            temp = temp->next;
        }

        cout << endl;
    }

    void insertAtEnd(int val) {

        Node* nn = new Node(val);

        if (!head) {
            head = nn;
            return;
        }

        Node* temp = head;

        while (temp->next)
            temp = temp->next;

        temp->next = nn;
        nn->prev = temp;
    }

    void insertAtBeginning(int val) {

        Node* nn = new Node(val);

        nn->next = head;

        if (head)
            head->prev = nn;

        head = nn;
    }

    void deleteAtPosition(int pos) {

        if (!head)
            return;

        Node* temp = head;

        while (pos > 1 && temp) {
            temp = temp->next;
            pos--;
        }

        if (!temp)
            return;

        // delete head
        if (temp == head) {

            head = head->next;

            if (head)
                head->prev = nullptr;

            delete temp;
            return;
        }

        // connect neighbours
        if (temp->prev)
            temp->prev->next = temp->next;

        if (temp->next)
            temp->next->prev = temp->prev;

        delete temp;
    }

    bool search(int key) {

        Node* temp = head;

        while (temp) {

            if (temp->data == key)
                return true;

            temp = temp->next;
        }

        return false;
    }
};

int main() {

    DoublyLinkedList dll;

    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(4);

    dll.display();

    dll.insertAtBeginning(0);

    dll.display();

    dll.deleteAtPosition(3);

    dll.display();

    cout << dll.search(4) << endl;

    return 0;
}