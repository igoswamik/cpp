#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll n, ll*a, ll*b){
    ll ans=0;
    ll* prod=new ll[n];
    for(int i=0;i<n;i++){
        prod[i]=a[i]*b[i];
        ans+=prod[i];
    }
    map<pair<int,int>,ll> mp;

    //for(int i=0;i<n;i++)
    for(int l=2;l<=n;l++){
        ll i=0,j=l-1;
        ll xx=i-1>=0?prod[i-1]:0;
        ll pre=prod[j]-(xx);
        ll curr=0;
        for(int k=i;k<=j;k++){
            curr+=a[j-k]*b[k];
        }
        if(curr>pre){
            ans=ans-pre+curr;
        }
        while(j+1<=n){

            j++;
            i++;
        }

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        ll n;
        cin >> n;
        ll *a = new ll[n];
        ll *b = new ll[n];
        unordered_map<ll, vector<ll>> m;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

            solve(n,a,b);

        
    
    return 0;
}