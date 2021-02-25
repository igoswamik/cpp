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
        ll n,p,k,x,y;
        cin>>n>>p>>k;
        string s;
        cin>>s;
        cin>>x>>y;
        int ans=INT_MAX;
        int dp[n];
        for(int i=n-1;i>=0;i--){
            if(n-i<=k){
                if(s[i]=='0') dp[i]=1;
                else dp[i]=0;
            }
            else{
                if(s[i]=='0') dp[i]=1+dp[i+k];
                else dp[i]=dp[i+k];
            }
           // cout<<dp[i]<<" ";
        }
        //cout<<"end"<<endl;
        int ycount=0;
        for(int i=p-1;i<n;i++){
           int curr=ycount*y+dp[i]*x;
           ans=min(ans,curr);
           ycount++;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}