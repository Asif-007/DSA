#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s)
{
    int i = 0, j = s.size() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
            return false;
        i++, j--;
    }
    return true;
}
void partition(string &s, vector<vector<string>> &ans, vector<string> &temp, int idx)
{
    if (idx == s.size())
    {
        ans.push_back(temp);
        return;
    }
    for (int i = idx; i < s.size(); i++)
    {
        string part = s.substr(idx, i - idx + 1);
        if (isPalindrome(part))
        {
            temp.push_back(part);
            partition(s, ans, temp, i + 1);
            temp.pop_back();
        }
    }
}
int main()
{
    string s = "madam";
    vector<vector<string>> ans;
    vector<string> temp;
    partition(s, ans, temp, 0);
    for (auto &i : ans)
    {
        for (auto j : i)
            cout << j << ' ';
        cout << endl;
    }
    return 0;
}