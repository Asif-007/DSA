#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    // Push
    q.push(10);
    q.push(20);
    q.push(30);

    // Front
    cout << "Front: " << q.front() << endl;

    // Rear
    cout << "Rear: " << q.back() << endl;

    // Size
    cout << "Size: " << q.size() << endl;

    // Empty
    cout << "Is Empty: " << q.empty() << endl;

    // Pop
    int x = q.front();
    cout << "Before pop front: " << x << endl;
    q.pop();

    cout << "After Pop Front: "
         << q.front() << endl;

    // Traverse (destructive)
    cout << "Elements: ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}