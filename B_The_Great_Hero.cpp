#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll A,B,n;
        cin>>A>>B>>n;
        ll *ai=new ll[n];
        for(int i=0;i<n;i++)cin>>ai[i];
       
        ll totalloss=0;
        for(int i=0;i<n;i++){
            ll bi;
            cin>>bi;
            ll x=ceil((1.0*bi)/A);
            x=x*ai[i];
            totalloss+=x;
        }
        bool ispos=false;
         for(int i=0;i<n;i++){
           if(B-totalloss+ai[i]>0){
               ispos=true;
               break;
           }
        }
        
        if(ispos) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
}