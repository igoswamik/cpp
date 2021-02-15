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
        ll n,k;
        cin>>n>>k;
        if(n%2==0){
            ll x=(k%n);
            if(x==0) x=n;
            cout<<x<<endl;
        }
        else{
            int x=n/2;
            int y=(k-1)/x;
            k+=y;
            int ans=k%n;
            if(ans==0) ans=n;
            cout<<ans<<endl;
        }
    }
    return 0;
}