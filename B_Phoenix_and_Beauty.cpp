#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n,ll k){
    int arr[n];
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;

        }
        if(m.size()>k){
            cout<<-1<<endl;
            return;
        }
        auto it=m.begin();
        while(it!=m.end()){
            v.push_back(it->first);
            it++;
        }
        while(v.size()<k){
            v.push_back(v[0]);
        }
        vector<int> ans;
        int i=0,j=0,c=0;
        
        while(j<n){
            for(int i=0;i<v.size();i++){
                if(v[i]==arr[j]){
                    j++;
                }
                ans.push_back(v[i]);
                c++;
            }
            if(c>=10000){
                 cout<<-1<<endl;
            return;
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        
        cout<<endl;
        return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        solve(n,k);
        
       
    }
    return 0;
}