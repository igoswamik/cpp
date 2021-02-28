#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        int even=0,one=0;
        auto it=m.begin();
        while(it!=m.end()){
            int ll=it->second;
            even+=(ll/2);
            one+=(ll%2);
            it++;
        }
        if(one<=even){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}