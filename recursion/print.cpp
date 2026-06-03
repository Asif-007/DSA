#include <bits/stdc++.h>
using namespace std;
void print(int n, int x)
{
    if (n+1 == x )
        return;
    cout << x << ' ';
    print(n, x + 1);
}
int main()
{
    print(5, 0);
    return 0;
}