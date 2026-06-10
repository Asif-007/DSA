#include <bits/stdc++.h>
using namespace std;
void subset(vector<int> &a, vector<vector<int>> &ans, vector<int> &temp, int idx)
{
    ans.push_back(temp);
    for (int i = idx; i < a.size(); i++)
    {
        if (i > idx && a[i] == a[i - 1])
            continue;
        temp.push_back(a[i]);
        subset(a, ans, temp, i + 1);
        temp.pop_back();
    }
}
int main()
{
    vector<int> a = {1, 2, 2, 2};
    vector<vector<int>> ans;
    vector<int> temp;
    sort(a.begin(), a.end());
    subset(a, ans, temp, 0);
    for (const auto &subset : ans)
    {
        cout << "{ ";
        for (const auto &num : subset)
        {
            cout << num << " ";
        }
        cout << "}" << endl;
    }
    return 0;
}