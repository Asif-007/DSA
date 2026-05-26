#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int i = 0, j = 0, n = mat.size();
    int col = 0;
    while (col < n)
    {
        i = 0, j = col;
        while (i < n && j >= 0)
        {
            cout << mat[i][j] << ' ';
            i++, j--;
        }
        col++;
    }
    j--, i++;
    int row = 1;
    while (row < n)
    {
        i = row, j = n - 1;
        while (i < n && j >= 0)
        {
            cout << mat[i][j] << ' ';
            i++, j--;
        }
        row++;
    }
    return 0;
}