#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> a = {1,0,2,0,1,2};
    int l=0,m=0,h=a.size()-1;
    while(m<=h){
        if(a[m]==1){
            m++;
        }
        else if(a[m]==0){
            swap(a[m], a[l]);
            m++;
            l++;
        }else{
            swap(a[h], a[m]);
            h--;
        }
    }
    for(int i: a){
        cout << i << ' ';
    }
    return 0;
}