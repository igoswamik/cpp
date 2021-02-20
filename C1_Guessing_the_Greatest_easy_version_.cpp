#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll query(ll l,ll r){
    int x=-1;
    if(l<r&&l>=1){
        cout<<"?"<<" "<<l<<" "<<r<<endl;
        cout.flush();
        cin>>x;
    }
    return x;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin>>t;
    // while(t--){
        ll n;
        cin>>n;
        ll l=1,r=n;
        while(l<r){
            if(l==r){
                break;
            }
            if(l==r-1){
                ll s=query(l,r);
                if(s==l){
                    l=r;
                }
                break;
            }

            int mid=(l+r)/2;
            ll i=query(l,r);
            if(i>=mid){
                ll j=query(mid,r);
                if(i==j){
                    l=mid;
                }
                else{
                        r=mid-1;
                }
            }
            else{
                ll j=query(l,mid);
                if(i==j){
                    r=mid;
                }
                else{
                        l=mid+1;
                }

            }
            
            
        }
        cout<<"! "<<l<<endl;
        
    //}
    return 0;
}