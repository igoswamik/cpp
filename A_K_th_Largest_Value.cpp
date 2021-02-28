#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q,one=0,zero=0;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0) zero++;
        else one++;
    }
    while(q--){
        int t,x;
        cin>>t>>x;
        if(t==1){
            arr[x-1]=1-arr[x-1];
            if(arr[x-1]==1) one++, zero--;
            else zero++, one--;
        }
        else{
            if(one>=x){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        
    }
    return 0;
}