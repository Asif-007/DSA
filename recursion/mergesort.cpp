#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &a, int low, int mid, int high)
{
    vector<int> temp(high - low + 1);
    int i = low, j = mid + 1, k = 0;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while (i <= mid)
        temp[k++] = a[i++];
    while (j <= high)
        temp[k++] = a[j++];
    k = 0;
    for (int i = low; i <= high; i++)
        a[i] = temp[k++];
}
void mergeSort(vector<int> &a, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(a, low, mid);
    mergeSort(a, mid + 1, high);
    merge(a, low, mid, high);
}
int main()
{
    vector<int> a = {3, 2, 6, 5, 1};
    mergeSort(a, 0, a.size() - 1);
    for (auto i : a)
        cout << i << ' ';
    return 0;
}