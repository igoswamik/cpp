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
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(i%2==0){
                if(s[i]!='a'){
                    s[i]='a';
                }
                else{
                    s[i]='b';
                }
            }
            else{
                if(s[i]!='z'){
                    s[i]='z';
                }
                else{
                    s[i]='y';
                }
            }
        }
        cout<<s<<endl;
    }

    return 0;
}
