#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int v, e;
    cout << "Enter number of vertices & edges: "; 
    cin >> v >> e; 
    
    cout << "Enter connected edges (1-indexed or 0-indexed vertices up to " << v << "): \n";
    
    vector<vector<int>> mat(v + 1, vector<int>(v + 1, 0));
    
    for (int i = 0; i < e; i++) 
    {
        int v1, v2;
        cin >> v1 >> v2;
        mat[v1][v2] = 1;
        mat[v2][v1] = 1;
    }
    
    cout << "\nAdjacency Matrix:\n";
    for (int i = 1; i <= v; i++) 
    {
        for (int j = 1; j <= v; j++) 
        {
            cout << mat[i][j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}
