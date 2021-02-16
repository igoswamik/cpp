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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            int x=min(arr[i],arr[i+1]);
            int y=max(arr[i],arr[i+1]);
            if(y>2*x){

                while(y>2*x){
                    y=ceil((1.0*y)/2);
                    count++;
                }
            }

        }
        cout<<count<<endl;
        
    }
    return 0;
}