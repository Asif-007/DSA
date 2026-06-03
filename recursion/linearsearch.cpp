#include <bits/stdc++.h>
using namespace std;
bool search(vector<int> a, int idx, int key)
{
    if (idx == a.size())
        return false;
    if (a[idx] == key)
        return true;
    return search(a, idx + 1, key);
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    int key = 0;
    cout << search(a, 0, key) << endl;
    return 0;
}