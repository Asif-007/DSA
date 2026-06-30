#include <bits/stdc++.h>
using namespace std;
void heapify(vector<int> &minHeap, int idx)
{
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;
    int size = minHeap.size();
    if (left < size && minHeap[smallest] > minHeap[left])
        smallest = left;
    if (right < size && minHeap[smallest] > minHeap[right])
        smallest = right;
    if (smallest != idx)
    {
        swap(minHeap[idx], minHeap[smallest]);
        heapify(minHeap, smallest);
    }
    return;
}
int main()
{
    vector<int> minHeap;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        minHeap.push_back(x);
    }
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(minHeap, i);
    for (int i : minHeap)
        cout << i << ' ';
    return 0;
}