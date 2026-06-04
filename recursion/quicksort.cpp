#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &a, int low, int high)
{
    int i = low, j = low;
    while (j <= high)
    {
        if (a[high] >= a[j])
        {
            swap(a[i++], a[j++]);
        }
        else
        {
            j++;
        }
    }
    return i - 1;
}
void quickSort(vector<int> &a, int low, int high)
{
    if (low >= high)
        return;
    int idx = partition(a, low, high);
    quickSort(a, low, idx - 1);
    quickSort(a, idx + 1, high);
}
int main()
{
    vector<int> a = {3, 2, 1, 5, 8, 2};
    quickSort(a, 0, a.size() - 1);
    for (auto i : a)
        cout << i << ' ';
    return 0;
}