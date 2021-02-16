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
        ll arr[n];
        unordered_map<ll,ll> m;
        // int mx=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            m[arr[i]]++;
            // mx=max(m[arr[i]],mx);
        }


        if(m.size()==1){
            cout<<0<<endl;
        }
        else{
            
                vector<ll> v;
                // unordered_map<ll,ll>::iterator=it;
                 auto it=m.begin();
                ll tsum=n;
                while(it!=m.end()){
                    v.push_back(it->second);
                    // tsum+=it->second;
                    it++;
                }

                ll minc=100000000;
                sort(v.begin(),v.end());

                vector<ll> sum;
                for(int i=0;i<v.size();i++){
                        if(i==0){
                            sum.push_back(v[i]);
                        }
                        else{
                            sum.push_back(v[i]+sum.back());
                        }
                }

                for(int i=0;i<v.size();i++){
                    ll left=tsum-sum[i];
                    ll l=v.size()-i-1;
                    l=l*v[i];
                    ll todel=left-l;
                    todel+=(i>0)?sum[i-1]:0;
                    minc=min(minc,todel);
                }
                cout<<minc<<endl;
        }

        
    }
    return 0;
}