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
        
        int n,k;
        cin>>n>>k;
        int arr[n];
        unordered_map<int,int> m;
        int maxv=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            m[arr[i]]++;
            maxv=max(maxv,arr[i]);
        }
        int i=0;
        while(i<=n){
            if(m.count(i)==0){
                break;
            }
            i++;
        }
        ll ans=0;
        if(k==0){
            ans=n;
        }
        else if(i>maxv){
            ans=n+k;
        }
        else{
            int x=ceil((i+maxv)/2.0);
            if(m.count(x)>0){
                ans=n;
            }
            else{
                ans=n+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}