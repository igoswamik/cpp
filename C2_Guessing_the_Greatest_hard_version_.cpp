#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<string,int> m;
ll n;
ll query(ll l,ll r){
    string  s="";
            s+=to_string(l)+to_string(r);
    if(m.count(s)>0){
        return m[s];
    }
    int x=-1;
    if(l<r&&l>=1 && r<=n){
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
        string s="";
        m.clear();
        n=0;
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
            s="";
            s+=to_string(l)+to_string(r);
            m[s]=i;
            if(i>=mid){
                ll j=query(mid,r);
                s="";
            s+=to_string(mid)+to_string(r);
                m[s]=j;
                if(i==j){
                    l=mid;
                }
                else{
                        r=mid-1;
                }
            }
            else{
                ll j=query(l,mid);
                s="";
            s+=to_string(l)+to_string(mid);
                m[s]=j;
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