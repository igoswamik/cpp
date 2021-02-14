#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        
       
        ll count=0;
        for(int i=1;i*i<x;i++){
            ll b=x/i;
            ll a=min(b-1,y);
            // cout<<"a="<<a<<endl;
            count+=max((a-i),(ll)0);
        }
        cout<<count<<endl;
    }
 
    return 0;
}