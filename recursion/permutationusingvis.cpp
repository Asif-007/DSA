#include <bits/stdc++.h>
using namespace std;
void print(string &s, int idx, vector<int> visited, string ans)
{
    if (ans.size() == s.size())
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (!visited[i])
        {
            visited[i] = 1;
            print(s, idx + 1, visited, ans + s[i]);
            visited[i] = 0;
        }
    }
}
int main()
{
    string s = "ABC";
    vector<int> visited(s.size(), 0);
    print(s, 0, visited, "");
    return 0;
}