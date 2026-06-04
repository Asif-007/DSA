#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> mat = {{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12},
                               {13, 14, 15, 16},
                               {17, 18, 19, 20}};
    int n = mat.size(), m = mat[0].size();
    int i = 0, j = 0;
    bool down = true;
    vector<int> ans;
    while (ans.size() < n * m)
    {
        if (down)
        {
            while (i < n)
            {
                ans.push_back(mat[i++][j]);
            }
            i = n - 1, j++;
            down = false;
        }
        else
        {
            while (i >= 0)
            {
                ans.push_back(mat[i--][j]);
            }
            i = 0, j++;
            down = true;
        }
    }
    for (auto i : ans)
        cout << i << ' ';
    cout << endl;
    return 0;
}
