#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

class Stack
{
private:
    Node *head;
    int cnt;

public:
    Stack()
    {
        head = nullptr;
        cnt = 0;
    }

    void push(int x)
    {

        Node *nn = new Node(x);
        nn->next = head;
        head = nn;

        cnt++;

        cout << x << " pushed onto stack\n";
    }

    void pop()
    {

        if (head == nullptr)
        {
            cout << "Stack Underflow\n";
            return;
        }

        Node *temp = head;

        cout << temp->data << " popped out of stack\n";

        head = head->next;

        delete temp;

        cnt--;
    }

    void peek()
    {

        if (head == nullptr)
        {
            cout << "Stack Underflow\n";
            return;
        }

        cout << head->data << " is top element\n";
    }

    bool isEmpty()
    {
        return head == nullptr;
    }

    int size()
    {
        return cnt;
    }

    void display()
    {

        Node *temp = head;

        while (temp)
        {
            cout << temp->data << ' ';
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.display();

    s.peek();

    cout << "Size = " << s.size() << endl;

    s.pop();

    s.display();

    cout << "Empty? " << s.isEmpty() << endl;

    return 0;
}