#include<bits/stdc++.h>
using namespace std;

bool sortBySec(const pair<int,int> &a, const pair<int,int> &b){
    return a.second<b.second || (a.second==b.second&& a.first<b.first);
}
int main(){
    vector<pair<int,int>>  p;
    p.push_back(make_pair(10,20));
    p.push_back(make_pair(8,7));
    p.push_back(make_pair(4,9));
    p.push_back(make_pair(4,7));
    sort(p.begin(),p.end(), sortBySec);
    for(auto i:p)
        cout << i.first << ' ' << i.second << endl;
    return 0;
}