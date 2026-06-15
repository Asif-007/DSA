#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
    int *a;
    int f, r, n;
    Queue(int x)
    {
        f = r = -1;
        n = x;
        a = new int[n];
    }
    void push(int x)
    {
        if (r == n - 1)
        {
            cout << "Queue is full\n";
            return;
        }
        if (f == -1)
        {
            f++;
        }
        r++;
        a[r] = x;
        cout << x << " is pushed\n";
        return;
    }
    void pop()
    {
        if (f == -1)
        {
            cout << "Queue is empty\n";
            return;
        }
        int x = a[f];
        f++;
        if (f > r)
            r = -1, f = -1;
        cout << x << " is removed\n";
        return;
    }
    void peekFront()
    {
        if (f == -1)
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << a[f] << endl;
    }
    void peekRear()
    {
        if (r == -1)
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << a[r] << endl;
    }
    bool isEmpty()
    {
        return f == -1;
    }
    bool isFull()
    {
        return r == n - 1;
    }
    void display()
    {
        for (int i = f; i <= r; i++)
            cout << a[i] << ' ';
        cout << endl;
        return;
    }
    ~Queue(){
        delete []a;
    }
};
int main()
{
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.peekFront();
    q.peekRear();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    return 0;
}