#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int *arr,int *dep,int s,int e,int d){
    if(s>e){
        return;
    }
    int mxi=s;
    for(int i=s;i<=e;i++){
        if(arr[i]>arr[mxi]) mxi=i;
    }
    dep[mxi]=d;
    solve(arr,dep,s,mxi-1,d+1);
    solve(arr,dep,mxi+1,e,d+1);
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
        int *arr=new int[n];
        int *dep=new int[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            dep[i]=0;
        }
        
        solve(arr,dep,0,n-1,0);
        for(int i=0;i<n;i++){
            cout<<dep[i]<<" ";
        }
        cout<<endl;
        

    }
    return 0;
}