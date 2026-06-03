#include <bits/stdc++.h>
using namespace std;
int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2); // Ceiling of gap/2
}
void mergeArrays(vector<int> &a, vector<int> &b)
{
    int n = a.size(), m = b.size();
    int len = n + m;
    int gap = nextGap(len);
    while (gap > 0)
    {
        int left = 0;
        int right = left + gap;
        while (right < len)
        {
            // Case 1: Both pointers are in array 'a'
            if (left < n && right < n)
            {
                if (a[left] > a[right])
                {
                    swap(a[left], a[right]);
                }
            }
            // Case 2: 'left' is in 'a' and 'right' is in 'b'
            else if (left < n && right >= n)
            {
                if (a[left] > b[right - n])
                {
                    swap(a[left], b[right - n]);
                }
            }
            // Case 3: Both pointers are in array 'b'
            else if (left >= n && right >= n)
            {
                if (b[left - n] > b[right - n])
                {
                    swap(b[left - n], b[right - n]);
                }
            }
            left++;
            right++;
        }
        gap = nextGap(gap);
    }
}
int main()
{
    vector<int> a = {1, 3, 4, 5};
    vector<int> b = {2, 4, 6, 8};
    mergeArrays(a, b);
    for (auto i : a)
        cout << i << ' ';
    cout << endl;
    for (auto i : b)
        cout << i << ' ';
    cout << endl;
    return 0;
}
