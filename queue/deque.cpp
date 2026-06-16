#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    dq.pop_front();
    dq.pop_back();

    cout << dq.size() << endl;
    cout << dq.empty() << endl;
}