#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {100, 80, 60, 70, 60, 75, 85};
    vector<int> ans(a.size(), -1);
    stack<int> s;
    for (int i = 0; i < a.size(); i++)
    {
        while(!s.empty() && a[i]>=a[s.top()])
            s.pop();
        if(!s.empty())
            ans[i] = a[s.top()];
        s.push(i);
    }
    for (int i : a)
        cout << i << ' ';
    cout << endl;
    for (int i : ans)
        cout << i << ' ';
    return 0;
}