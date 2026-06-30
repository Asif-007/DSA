#include <bits/stdc++.h>
using namespace std;
void heapify(vector<int> &minHeap, int idx)
{
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;
    int size = minHeap.size();
    int smallest = idx;
    if (left < size && minHeap[smallest] > minHeap[left])
        smallest = left;
    if (right < size && minHeap[smallest] > minHeap[right])
        smallest = right;
    if (smallest != idx)
    {
        swap(minHeap[smallest], minHeap[idx]);
        heapify(minHeap, smallest);
    }
    return;
}
void deleteHeap(vector<int> &minHeap)
{
    cout << minHeap[0] << endl;
    minHeap[0] = minHeap[minHeap.size() - 1];
    minHeap.pop_back();
    heapify(minHeap, 0);
}
void insertHeap(vector<int> &minHeap)
{
    int idx = minHeap.size() - 1;
    int parent;
    while (idx)
    {
        parent = (idx - 1) / 2;
        if (minHeap[parent] > minHeap[idx])
        {
            swap(minHeap[parent], minHeap[idx]);
            idx = parent;
        }
        else
            break;
    }
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
        insertHeap(minHeap);
    }
    deleteHeap(minHeap);
    for (int i : minHeap)
        cout << i << ' ';
    return 0;
}