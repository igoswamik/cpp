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
        int n;
        cin>>n;
        int arr[n];
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            m[arr[i]]++;
        }
        vector<int> v;
        for(int i=0;i<=100;i++){
            if(m.count(i)>0){
                v.push_back(i);
                m[i]--;
            }
        }
        auto it=m.begin();
        while(it!=m.end()){
            while(it->second>0){
                v.push_back(it->first);
                it->second--;
            }
            it++;
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}