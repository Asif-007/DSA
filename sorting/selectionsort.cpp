#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {1,3,2,5,6};
    for(int i:a)
        cout << i << ' ';
    for(int i=0;i<a.size()-1;i++){
        int index = i;
        for(int j=i;j<a.size();j++){
            if(a[index]>a[j])
                index = j;
        }
        swap(a[i], a[index]);
    }
    cout << endl;
    for(int i : a)
        cout  << i << ' ';
}