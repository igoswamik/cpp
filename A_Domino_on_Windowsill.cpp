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
        int n,k1,k2,w,b,w1,b1,r1,r2;
        cin>>n>>k1>>k2>>w>>b;
        r1=n-k1;
        r2=n-k2;
        w1=min(k1,k2)+(abs(k1-k2)/2);
        b1=min(r1,r2)+(abs(r1-r2)/2);
        if(w<=w1 && b<=b1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}