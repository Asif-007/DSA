#include<bits/stdc++.h>
using namespace std;

int main(){
    int v, e;
    cin >> v >>  e;
    vector<vector<int>> adj_list(v+1);
    for(int i=0;i<e;i++){
        int a, b;
        cin >> a >>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    for(int i=1;i<=v;i++){
        cout << i << " -> ";
        for(int x: adj_list[i]){
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}