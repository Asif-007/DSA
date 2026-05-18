#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {0,2,3,5,6,8,7};
    int low = 0, high = a.size() - 1, mid = 0;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (a[mid] == mid)
        {
            low = mid + 1;
        }
        else if (a[mid] > mid)
        {
            high = mid - 1;
        }
    }
    cout << low << endl;
    return 0;
}