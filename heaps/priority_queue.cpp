#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ===========================
    // MAX HEAP (Default)
    // ===========================
    priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(50);
    maxHeap.push(20);
    maxHeap.push(5);

    cout << "Max Heap Top : " << maxHeap.top() << endl;
    cout << "Size : " << maxHeap.size() << endl;
    cout << "Empty : " << maxHeap.empty() << endl;

    cout << "Max Heap Elements : ";
    priority_queue<int> temp1 = maxHeap;
    while (!temp1.empty())
    {
        cout << temp1.top() << " ";
        temp1.pop();
    }
    cout << "\n\n";

    // ===========================
    // MIN HEAP
    // ===========================
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(10);
    minHeap.push(50);
    minHeap.push(20);
    minHeap.push(5);

    cout << "Min Heap Top : " << minHeap.top() << endl;

    cout << "Min Heap Elements : ";
    auto temp2 = minHeap;
    while (!temp2.empty())
    {
        cout << temp2.top() << " ";
        temp2.pop();
    }
    cout << "\n\n";

    // ===========================
    // PAIR MAX HEAP
    // ===========================
    priority_queue<pair<int, int>> pairMax;

    pairMax.push({2, 100});
    pairMax.push({5, 50});
    pairMax.push({1, 500});
    pairMax.push({5, 10});

    cout << "Pair Max Heap :\n";
    auto temp3 = pairMax;
    while (!temp3.empty())
    {
        cout << "(" << temp3.top().first << ", "
             << temp3.top().second << ")\n";
        temp3.pop();
    }
    cout << endl;

    // ===========================
    // PAIR MIN HEAP
    // ===========================
    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>> pairMin;

    pairMin.push({2, 100});
    pairMin.push({5, 50});
    pairMin.push({1, 500});
    pairMin.push({5, 10});

    cout << "Pair Min Heap :\n";
    auto temp4 = pairMin;
    while (!temp4.empty())
    {
        cout << "(" << temp4.top().first << ", "
             << temp4.top().second << ")\n";
        temp4.pop();
    }
    cout << endl;

    // ===========================
    // POP
    // ===========================
    maxHeap.pop();

    cout << "After Pop, Top : " << maxHeap.top() << endl;

    // ===========================
    // COPY
    // ===========================
    priority_queue<int> copyHeap = maxHeap;

    cout << "Copied Heap : ";
    while (!copyHeap.empty())
    {
        cout << copyHeap.top() << " ";
        copyHeap.pop();
    }
    cout << endl;

    // ===========================
    // SWAP
    // ===========================
    priority_queue<int> A;
    priority_queue<int> B;

    A.push(100);
    A.push(200);

    B.push(10);
    B.push(20);

    A.swap(B);

    cout << "\nAfter Swap\n";

    cout << "A : ";
    auto ta = A;
    while (!ta.empty())
    {
        cout << ta.top() << " ";
        ta.pop();
    }

    cout << "\nB : ";
    auto tb = B;
    while (!tb.empty())
    {
        cout << tb.top() << " ";
        tb.pop();
    }

    cout << "\n";

    return 0;
}