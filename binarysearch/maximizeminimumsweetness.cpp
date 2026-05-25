#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> a, int mid, int k)
{
    int sum = 0, cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if (sum >= mid)
        {
            cnt++;
            sum = 0;
        }
    }
    return cnt >= k;
}
int main()
{
    vector<int> a = {6, 3, 2, 8, 7, 5};
    int k = 2;
    int low = 0, high = accumulate(a.begin(), a.end(), 0);
    int mid = 0, ans = 0;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (isPossible(a, mid, k + 1))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
