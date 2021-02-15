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
        sort(arr,arr+n);
        ll count=0;
        int i=1;
        while(i<n&& arr[i]==arr[i-1]) i++;

        if(i<n){
            count+=n-i;
        }
       
        cout<<count<<endl;
    }
    return 0;
}