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
        ll p[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        vector<ll> ans;
        ll mq=n;
        // for(int i=n;i>=1;i--){
        //     mq.push(n);
        // }
        ll i=n-1;
        unordered_map<ll,ll> m;
        while(i>=0){
            stack<ll> s;
            while(m.count(mq)>0){
                mq--;
            }
            while(i>=0 && p[i]!=mq){
                m[p[i]]++;
                s.push(p[i]);
                i--;
            }
            if(i>=0 && p[i]==mq){
                 m[p[i]]++;
                s.push(p[i]);
                i--;
            }
            while(!s.empty()){
                ans.push_back(s.top());
                s.pop();
            }

        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}