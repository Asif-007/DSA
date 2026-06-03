#include <bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int> a, int low, int high, int key)
{
    if (low > high)
        return false;
    int mid = low + (high - low) / 2;
    if (a[mid] == key)
        return true;
    if (a[mid] > key)
        return binarySearch(a, low, mid - 1, key);
    return binarySearch(a, mid + 1, high, key);
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    int key = 5;
    cout << binarySearch(a, 0, a.size() - 1, key) << endl;
    return 0;
}