#include<bits/stdc++.h>
using namespace std;
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
int main(){
    vector<int> maxHeap;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        maxHeap.push_back(x);
    }
    for(int i=n/2-1;i>=0;i--)
        heapify(maxHeap, i);
    for (int i : maxHeap)
        cout << i << ' ';
    return 0;
}