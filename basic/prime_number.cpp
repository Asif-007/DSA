#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, f = 0;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            f = 1;
            break;
        }
    }
    if (f)
        cout << "Not Prime\n";
    else
        cout << "Prime\n";
    return 0;
}