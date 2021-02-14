/******************************************************************************

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
void solve(ll n, ll q,ll k){
    ll arr[n+2];
    arr[0]=0;
    arr[n+1]=k+1;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    
    ll pre[n+2];
    pre[0]=0;
    for(int i=1;i<=n;i++){
        ll x=arr[i+1]-arr[i-1]-2;
        pre[i]=x+pre[i-1];
    }
    
    while(q--){
        ll l,r;
        cin>>l>>r;
        ll vl=arr[l+1]-0-2;
        ll vr=k+1-arr[r-1]-2;
        if(l==r){
            cout<<k-1<<endl;
        }
        else if(l==r-1){
            
            cout<<vl+vr<<endl;
        }
        else{
            ll ans=vl+vr+pre[r-1]-pre[l];
            cout<<ans<<endl;
        }
    }
    
}

int main()
{
    // ll t;
    // cin>>t;
    // while(t--){
        ll n,q,k;
        cin>>n>>q>>k;
        solve(n,q,k);
    // }

    return 0;
}
