#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll c0,ll c1,ll c2, ll c){
    ll ans=0;
        if(c2>c && c0<c){
                int x=min(c-c0,c2-c);
                c0+=x;
                c2-=x;
                ans+=x;
        }
        if(c1>c && c2<c){
                int x=min(c-c2,c1-c);
                c2+=x;
                c1-=x;
                ans+=x;
        }
        if(c0>c && c1<c){
                int x=min(c-c1,c0-c);
                c1+=x;
                c0-=x;
                ans+=x;
        }

        int extra=0;
        if(c2>c) extra+=c2-c;
        if(c1>c) extra+=c1-c;
        if(c0>c) extra+=c0-c;

        ans+=(2*extra);
        cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,c0=0,c1=0,c2=0;
        cin>>n;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            if(x%3==0) c0++;
            else if(x%3==1) c1++;
            else c2++;
        }
        solve(c0,c1,c2,n/3);
    }
    return 0;
}