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
        ll n;
        cin>>n;
      
        ll x[n];
        ll y[n];
        for(int i=0;i<n;i++) cin>>x[i]>>y[i];
            
        sort(x,x+n);
        sort(y,y+n);
        if(n%2==0){
            ll mid=n/2;
            ll a=x[mid]-x[mid-1]+1;
            ll b=y[mid]-y[mid-1]+1;
            ll ans=a*b;
            cout<<ans<<endl;
        }
        else{
            cout<<1<<endl;
        }

    }
    return 0;
}