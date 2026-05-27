#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 = "Asif";
    string str2 = "Asif";
    cout << str1 << ' ' << str2;
    str1 = str1 + str2;
    sort(str1.begin(), str1.end());
    cout << str1 << endl;
    return 0;
}