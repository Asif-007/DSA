#include <bits/stdc++.h>
using namespace std;
void substring(string &s, int idx, vector<char> temp)
{
    if (!temp.empty())
    {
        for (auto i : temp)
            cout << i << ' ';
        cout << endl;
    }
    if (idx == s.size())
        return;
    if (temp.size() == 0)
    {
        substring(s, idx + 1, temp);
    }
    temp.push_back(s[idx]);
    substring(s, idx + 1, temp);
}
int main()
{
    string s = "abc";
    vector<char> temp;
    substring(s, 0, temp);
    return 0;
}
