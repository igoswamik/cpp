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
        vector<pair<ll,ll>> v;
        vector<ll> sum;
      
        for(int i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(make_pair(x,i));   
        }

        sort(v.begin(),v.end());

        for(int i=0;i<v.size();i++){
            if(i==0){
                sum.push_back(v[i].first);
            }
            else{
                sum.push_back(v[i].first+sum.back());
            }
        }

        vector<ll> ans;
        ll i=v.size()-1;
        while(i>=0){
                if(i==n-1){
                    ans.push_back(v[i].second);
                }
                else{
                    if(sum[i]>=v[i+1].first){
                        ans.push_back(v[i].second);
                    }
                    else{
                        break;
                    }
                }
                i--;
        }

        sort(ans.begin(),ans.end());
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}