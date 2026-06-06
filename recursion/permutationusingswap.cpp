#include <bits/stdc++.h>
using namespace std;
void print(string &s, int idx)
{
    if (idx == s.size() - 1)
    {
        cout << s << endl;
        return;
    }

    for (int i = idx; i < s.size(); i++)
    {
        swap(s[i], s[idx]);
        print(s, idx + 1);
        swap(s[i], s[idx]);
    }
}
int main()
{
    string s = "ABC";
    print(s, 0);
    return 0;
}