#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(pair<int,int> arr[],int tm[],int n){
    int preA=0,preD=0;
    for(int i=0;i<n;i++){
        int delay=tm[i];
        int req_time=arr[i].first-(i>0?arr[i-1].second:0);
        int total_time=delay+req_time;
        int currA=preD+total_time;
        int x=ceil((arr[i].second-arr[i].first)/2.0);
        int currD=max(currA+x,arr[i].second);
        preA=currA;
        preD=currD;
    }
    cout<<preA<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pair<int,int> arr[n];
        for(int i=0;i<n;i++) cin>>arr[i].first>>arr[i].second;
        int tm[n];
        for(int i=0;i<n;i++) cin>>tm[i];

        solve(arr,tm,n); 
    }
    return 0;
}