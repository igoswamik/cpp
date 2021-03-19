#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(ll n, vector<ll> v){
    ll ans=10000000000000000;
    ll left1=n;
    ll left2=n;
    ll minc1=INT_MAX;
    ll minc2=INT_MAX;
    ll sum1=0,sum2=0;
    ll curr1=0,curr2=0;
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            sum1+=v[i];
            minc1=min(minc1,v[i]);
            left1-=1;
            curr1=sum1+minc1*left1;
        }
        else{
            sum2+=v[i];
            minc2=min(minc2,v[i]);
            left2-=1;
            curr2=sum2+minc2*left2;
        }
        //cout<<curr1<<" "<<curr2<<endl;

        if(curr1!=0 &&curr2!=0){
            ans=min(ans,curr1+curr2);
        }
        
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
                ll n;
                cin>>n;
                vector<ll> v;
                for(int i=0;i<n;i++){
                    ll x;
                    cin>>x;
                    v.push_back(x);
                }

                    ll ans=0;
                    ans=solve(n,v);
                    cout<<ans<<endl;
       }
    
    return 0;
}