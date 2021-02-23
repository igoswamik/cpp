#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    int ltor[m],rtol[m];
    int pre=-1;
    for(int i=0;i<m;i++){
        int j=pre+1;
        while(j<n && s[j]!=t[i]){
            j++;
        }
        ltor[i]=j;
        pre=j;
    }
    pre=n;
    for(int i=m-1;i>=0;i--){
        int  j=pre-1;
        while(j>=0 && s[j]!=t[i]){
            j--;
        }
        rtol[i]=j;
        pre=j;
    }
    int ans=0;
    for(int i=m-1;i>0;i--){
        ans=max(ans,max(rtol[i]-rtol[i-1],rtol[i]-ltor[i-1]));
    }
    cout<<ans<<endl;
        return 0;
}