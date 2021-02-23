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
        ll p,x,y,z;
        cin>>p>>x>>y>>z;
       
        ll ans=-1;
        ll a,b,c;
        a=p/x;
        b=p/y;
        c=p/z;
        a=a*x;
        b=b*y;
        c=c*z;

            while(1){
                if(a>=p){
                    if(ans==-1) ans=a-p;
                    else ans=min(ans,a-p);
                } 
                if(b>=p){
                    if(ans==-1) ans=b-p;
                    else ans=min(ans,b-p);
                }  
                if(c>=p){
                    if(ans==-1) ans=c-p;
                    else ans=min(ans,c-p);
                }  
                if(ans!=-1){
                    break;
                }
                a+=x;
                b+=y;
                c+=z;
            }
           
           
            cout<<ans<<endl;
      
    }
    return 0;
}