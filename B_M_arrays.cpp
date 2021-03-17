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
        ll n,m;
        cin>>n>>m;
        unordered_map<ll,ll> mp;

        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            x=x%m;
            mp[x]++;
        }
        ll t=0;
        ll ans=0;
        
        while(mp.size()>0){
            
            auto it=mp.begin();
            int x=it->first;
            int c=it->second;
             mp.erase(it);
            int r=m-x;
            if(x==0){
                ans++;
                t+=c;
            }
            else if(r==x && c>=2){
                t+=c;
                ans++;
            }
            else if(r!=x && mp.count(r)>0){
                int c2=mp[r];
                if(c==c2){
                    ans++;
                    t+=(c+c2);
                }
                else{
                    ans++;
                    ll w=(c<c2)?c:c2;
                    t+=2*w+1;
                }
                mp.erase(r);
            }
        }
        ans+=(n-t);
        cout<<ans<<endl;

        
    }
    return 0;
}