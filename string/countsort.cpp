#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "asifakmal";
    vector<int> a(26, 0);
    for (char ch : s)
        a[ch - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        while (a[i])
        {
            cout << char(i + 'a');
            a[i]--;
        }
    }
    return 0;
}