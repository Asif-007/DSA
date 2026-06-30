#include <bits/stdc++.h>
using namespace std;
void insertHeap(vector<int> &maxHeap)
{
    int idx = maxHeap.size() - 1;
    int parent;
    while (idx > 0)
    {
        parent = (idx - 1) / 2;
        if (maxHeap[parent] < maxHeap[idx])
        {
            swap(maxHeap[parent], maxHeap[idx]);
            idx = parent;
        }
        else
            break;
    }
}
void heapify(vector<int> &maxHeap, int idx)
{
    int largest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;
    int size = maxHeap.size();
    if (left < size && maxHeap[left] > maxHeap[largest])
        largest = left;
    if (right < size && maxHeap[right] > maxHeap[largest])
        largest = right;
    if (largest != idx)
    {
        swap(maxHeap[largest], maxHeap[idx]);
        heapify(maxHeap, largest);
    }
    return;
}
void deleteHeap(vector<int> &maxHeap)
{
    cout << maxHeap[0] << endl;
    // Replace first element by last element
    maxHeap[0] = maxHeap[maxHeap.size() - 1];
    // Delete last node
    maxHeap.pop_back();
    // Correct position pe leke jao
    heapify(maxHeap, 0);
}
int main()
{
    vector<int> maxHeap;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        maxHeap.push_back(x);
        insertHeap(maxHeap);
    }
    deleteHeap(maxHeap);
    for (int i : maxHeap)
        cout << i << ' ';
    return 0;
}