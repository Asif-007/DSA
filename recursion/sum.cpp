#include <bits/stdc++.h>
using namespace std;
int sum(vector<int> &a, int idx, int s)
{
    if (idx == a.size())
    {
        return s;
    }
    return sum(a, idx + 1, s + a[idx]);
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    cout << sum(a, 0, 0) << endl;
    return 0;
}