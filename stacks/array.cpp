#include <bits/stdc++.h>
using namespace std;
void push(int a[], int &top, int &n, int &x)
{
    if (top == n - 1)
    {
        cout << "Stack Overflow\n";
        return;
    }
    a[++top] = x;
    cout << x << " is pushed onto stack\n";
    return;
}
void pop(int a[], int &top)
{
    if (top == -1)
    {
        cout << "Stack Underflow\n";
        return;
    }
    int x = a[top];
    top--;
    cout << x << " is popped out\n";
    return;
}
void peek(int a[], int &top)
{
    if (top == -1)
    {
        cout << "Stack Underflow\n";
        return;
    }
    cout << a[top] << endl;
    return;
}
bool isEmpty(int &top)
{
    return top == -1;
}
bool isFull(int &top, int &n)
{
    return top == n - 1;
}
int main()
{
    int n;
    cin >> n;
    int stack[n];
    int top = -1;
    int op;
    while (1)
    {
        cin >> op;
        if (op == -1)
            break;
        else if (op == 1)
        {
            int x;
            cin >> x;
            push(stack, top, n, x);
        }
        else if (op == 2)
        {
            pop(stack, top);
        }
        else if (op == 3)
        {
            peek(stack, top);
        }
        else if (op == 4)
        {
            cout << isEmpty(top) << endl;
        }
        else if (op == 5)
        {
            cout << isFull(top, n) << endl;
        }
        else
        {
            cout << "Choose option between 1-5\n";
        }
    }
    return 0;
}