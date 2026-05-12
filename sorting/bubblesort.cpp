#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1, 3, 5, 2, 4};
    for (int i : a)
        cout << i << ' ';
    cout << endl;
    for (int i = 0; i < a.size() - 1; i++)
    {
        for (int j = 0; j < a.size() - i - 1; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j+1]);
        }
    }
    for (int i : a)
        cout << i << ' ';
    return 0;
}