#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << endl;

    st.pop();

    cout << "Top: " << st.top() << endl;
    cout << floor((st.size()+1)/2);
    cout << "Size: " << st.size() << endl;

    cout << "Empty: " << st.empty() << endl;

    return 0;
}