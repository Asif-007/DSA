#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    int l = 0, h = a.size() - 1, m, target = 5;
    bool f = false;
    while (l <= h)
    {
        m = (l + h) / 2;
        if (a[m] == target)
        {
            f = true;
            break;
        }
        else if (a[m] > target)
            h = m - 1;
        else
            l = m + 1;
    }
    if (f)
        cout << "Found\n";
    else
        cout << "Not Found\n";
    return 0;
}