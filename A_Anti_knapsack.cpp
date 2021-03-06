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
        vector<int>v;
        for(int i=k+1;i<=n;i++){
            v.push_back(i);
        }
        unordered_map<int,int> m;
        for(int i=k-1;i>=1;i--){
            if(m.count(i)==0){
                v.push_back(i);
                m[k-i]++;
            }
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}