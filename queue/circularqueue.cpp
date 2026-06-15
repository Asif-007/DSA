#include <bits/stdc++.h>
using namespace std;
class CircularQueue
{
public:
    int *a;
    int f, r, n;
    CircularQueue(int x)
    {
        f = r = -1;
        n = x;
        a = new int[n];
    }
    void push(int x)
    {
        if (isFull())
        {
            cout << "Queue is full\n";
            return;
        }
        if (f == -1)
        {
            f++;
            r++;
        }
        else
        {
            r = (r + 1) % n;
        }
        a[r] = x;
        cout << x << " pushed in queue\n";
        return;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }
        int x = a[f];
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f = (f + 1) % n;
        }
        cout << x << " is removed\n";
        return;
    }
    void peekFront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << a[f] << endl;
        return;
    }
    void peekRear()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << a[r] << endl;
        return;
    }
    bool isEmpty()
    {
        return f == -1 && r == -1;
    }
    bool isFull()
    {
        return f == (r + 1) % n;
    }
};
int main()
{
    CircularQueue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    return 0;
}