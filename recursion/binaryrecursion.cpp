#include <bits/stdc++.h>
using namespace std;
void subsequence(vector<int> a, vector<int> ans, int idx)
{
    if (idx == a.size())
    {
        for (auto x : ans)
            cout << x << ' ';
        cout << endl;
        return;
    }
    subsequence(a, ans, idx + 1);
    ans.push_back(a[idx]);
    subsequence(a, ans, idx + 1);
}
int main()
{
    vector<int> a = {1, 2, 3};
    vector<int> ans;
    subsequence(a, ans, 0);
    return 0;
}