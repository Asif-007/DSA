#include <bits/stdc++.h>
using namespace std;
void countWays(int num, int n, int x, int total, int &ans)
{
    if (total == num)
    {
        ans++;
        return;
    }
    if (total > num)
        return;
    int val = pow(n, x);
    if (val > num)
        return;
    countWays(num, n + 1, x, total + val, ans);
    countWays(num, n + 1, x, total, ans);
}
int main()
{
    int num = 100, n = 1, x = 2, ans = 0;
    countWays(num, n, x, 0, ans);
    cout << ans << endl;
    return 0;
}