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
        ll n,k,d;
        cin>>n>>k>>d;
        int *arr=new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_map<int,int> m;
        for(int i=0;i<d;i++){
            m[arr[i]]++;
        }
        int ans=m.size();
        for(int i=d;i<n;i++){
            m[arr[i]]++;
            m[arr[i-d]]--;
            if(m[arr[i-d]]<=0){
                m.erase(arr[i-d]);
            }
            int x=m.size();
            ans=min(ans,x);
        }
        cout<<ans<<endl;
        
    }
    return 0;
}