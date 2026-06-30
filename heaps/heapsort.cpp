#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &a, int n, int idx)
{
    int largest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != idx)
    {
        swap(a[idx], a[largest]);
        heapify(a, n, largest);
    }
}

void heapSort(vector<int> &a)
{
    int n = a.size();

    // Build Max Heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

    // Heap Sort
    for (int i = n - 1; i > 0; i--)
    {
        swap(a[0], a[i]);      // Move largest to correct position
        heapify(a, i, 0);      // Restore heap in remaining array
    }
}

int main()
{
    vector<int> a = {4, 10, 3, 5, 1};

    heapSort(a);

    for (int x : a)
        cout << x << " ";
}