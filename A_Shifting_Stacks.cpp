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
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll x=arr[0],i=1;
        arr[0]=0;
        bool flag=true;
        while(i<n){
            arr[i]+=x;
            x=arr[i]-(arr[i-1]);
            if(x<=0){
                flag=false;
                break;
            }
            x-=1;
            arr[i]=arr[i-1]+1;
            i++;
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