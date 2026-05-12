#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {3, 2, 4, 1, 5};
    // for(int i=0;i<a.size()-1;i++){
    //     for(int j=i;j>=0;j--){
    //         if(a[j]>a[j+1])
    //             swap(a[j], a[j+1]);
    //         else
    //             break;
    //     }
    // }

    for (int i = 1; i < a.size(); i++)
    {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
    for (int i : a)
        cout << i << ' ';
    return 0;
}