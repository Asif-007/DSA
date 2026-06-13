#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {3, 2, 5, 6, 1};
    stack<int> s;
    vector<int> ans(a.size(), -1);
    for (int i = 0; i < a.size(); i++)
    {
        while (!s.empty() && a[i] > a[s.top()])
        {
            ans[s.top()] = a[i];
            s.pop();
        }
        s.push(i);
    }
    for (int i : a)
        cout << i << ' ';
    cout << endl;
    for (int i : ans)
        cout << i << ' ';
    return 0;
}