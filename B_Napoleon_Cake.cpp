#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int x=n;
        vector<int> v;
        for(int i=n-1;i>=0;i--){
            if(i<x && a[i]==0) v.push_back(0);
            else{
                v.push_back(1);
                x=min(x,i-a[i]+1);
            }
        }

        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}