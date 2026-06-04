#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &a, int target, int idx, int sum)
{
    if (idx == a.size())
    {
        return target == sum;
    }
    return isPossible(a, target, idx + 1, sum) || isPossible(a, target, idx + 1, sum + a[idx]);
}
int main()
{
    vector<int> a = {2, 4, 5, 6, 7};
    int target = 10;
    cout << isPossible(a, target, 0, 0) << endl;
    return 0;
}