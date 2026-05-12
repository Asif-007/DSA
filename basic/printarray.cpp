#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a[5] = {1,2,3,4,5};
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout << a[j] << ' ';
    //     }
    //     cout << endl;
    // }
    // cout << "Pattern Print\n";
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5-i;j++){
    //         cout << a[j] << ' ';
    //     }
    //     cout <<  endl;
    // }
    // cout << "Pattern Print\n";
    // for(int i=0;i<5;i++){
    //     for(int j=i;j<5;j++){
    //         cout << a[j] << ' ';
    //     }
    //     cout <<  endl;
    // }
    // cout << "Reverse Print\n";
    // for(int i=0;i<5;i++){
    //     for(int j=4;j>=0;j--){
    //         cout << a[j] << ' ';
    //     }
    //     cout << endl;
    // }
    // cout << "Pattern Print\n";
    // for(int i=0;i<5;i++){
    //     for(int j=5-i-1;j>=0;j--){
    //         cout << a[j] << ' ';
    //     }
    //     cout <<  endl;
    // }

    // int arr[5] = {2,3,1,2,3};
    // vector<int> ans;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             cout << arr[j] << ' ';
    //             ans.push_back(arr[i]);
    //         }
    //     }
    // }
    // cout << endl;
    // for(int i: ans)
    //     cout << i << ' ';

    vector<int> arr = {0, 2, 1, 0, 2, 1};
    int c0, c1, c2;
    c0=c1=c2=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            c0++;
        else if (arr[i] == 1)
            c1++;
        else
            c2++;
    }
    cout << c0 << c1 << c2;
    int j = 0;
    while (c0)
    {
        arr[j++] = 0;
        c0--;
    }
    while (c1)
    {
        arr[j++] = 1;
        c1--;
    }
    while (c2)
    {
        arr[j++] = 2;
        c2--;
    }
    for(int i:arr)
        cout << i << ' '; 
    return 0;
}