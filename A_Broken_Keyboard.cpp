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
        string s,ans="";
        cin>>s;
        unordered_set<char> ch;
        int i=0;
        while(i<s.size()){
            int l=0;
            char c=s[i];
            while(i<s.size() && s[i]==c){
                i++;
                l++;
            }

            if(l%2!=0 && ch.count(c)==0){
                ans+=c;
                ch.insert(c);
            }
        }
        sort(ans.begin(),ans.end());
        cout<<ans<<endl;
        
    }
    return 0;
}