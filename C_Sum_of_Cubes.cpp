#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool solve(ll x, ll y){
     for(ll i=1;i<=y;i++){
         ll z=i*i*i;
         ll w=x-z;
         double a=cbrt(w);
         ll a1=floor(a);
         ll a2=ceil(a);
         if(a>=1.0 && a1==a2){
             return true;
         }
     }
     return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll x;
        cin>>x;
         ll y=ceil(cbrt(x));
         if(solve(x,y)){
             cout<<"YES"<<endl;
         }
         else{
             cout<<"NO"<<endl;
         }
        
    }
    return 0;
}