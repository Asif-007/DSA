#include<bits/stdc++.h>
using namespace std;
int kmp(string &s){
    int n = s.size();
    vector<int> lps(n,0);
    int first=0, second=1;
    while(second<n){
        if(s[first]==s[second])
        {
            first++;
            lps[second] = first;
            second++;
        }else{
            if(first!=0)
                first = lps[first-1];
            else    
                second++;
        }
    }
    return lps[n-1];
}
int main(){
    string s = "abcdabceabcdabc";
    int index = kmp(s);
    if(index==0)
        cout << "No prefix suffix same\n";
    else    
        cout << s.substr(0,index) << endl;
    return 0;
}