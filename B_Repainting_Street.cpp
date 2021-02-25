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
        int arr[n];
        unordered_map<int,int> m;
        vector<int> c;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(m.count(arr[i])==0){
                m[arr[i]]++;
                c.push_back(arr[i]);
            }
        }
        int ans=n;
        for(int i=0;i<c.size();i++){
            int num=c[i];
            int j=0;
            int count=0;
            while(j<n){
                if(arr[j]==num){
                    j++;
                }
                else{
                    j+=k;
                    count++;
                }
            }
            ans=min(ans,count);
        }
        cout<<ans<<endl;
    }
    return 0;
}