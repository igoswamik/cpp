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
        ll n,m,r,c,ans=0;
        cin>>n>>m>>r>>c;
        ans=max(ans,abs(1-r)+abs(1-c));
        ans=max(ans,abs(1-r)+abs(m-c));
        ans=max(ans,abs(n-r)+abs(1-c));
        ans=max(ans,abs(n-r)+abs(m-c));
        cout<<ans<<endl;
    }
    return 0;
}