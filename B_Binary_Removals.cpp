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
        int n=s.length();
        bool flag=true;
        int i=n-1;
        while(i>=0){
            int zc=0;
            if(i>=0 && s[i]=='0'){
                while(i>=0 &&s[i]=='0'){
                    i--;
                    zc++;
                }
            }
            else{
                i--;
            }

            if(i>=0 && zc>=2){
                int onec=0;
                while(i>=0){
                    int oc=0;
                    if(s[i]=='1'){
                        while(i>=0 &&s[i]=='1'){
                                i--;
                        oc++;
                        }
                        
                    }
                    else{
                        i--;
                    }
                    onec=max(onec,oc);
                }
                if(onec>=2){
                        flag=false;
                       break;
                }
                
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}