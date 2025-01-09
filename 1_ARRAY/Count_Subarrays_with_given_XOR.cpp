#include <c++/stdlib.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {4, 2, 2, 6, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 0;
    int x = 6;
    int ans = 0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        m = m^arr[i];
        if(m==x){
            ans++;
        }
        if(mp.find(m^x)!=mp.end()){
            ans+=mp[m^x];
        }
        mp[m]++;
    }
    cout<<ans;
    return 0;
}