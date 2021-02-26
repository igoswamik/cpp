#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int MaxSetBit(int n){
    int c=-1;
    while(n>0){
        c++;
        n/=2;
    }
    return c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    int arr[n];
    int count[32]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        int hbit=MaxSetBit(arr[i]);
        count[hbit]++;
    }
    bool notdone=true;
    for(int i=0;i<32;i++){
        if(count[i]>2){
            cout<<1<<endl;
            notdone=false;
            break;
        }
    }
    if(notdone){
        int ans=INT_MAX;
        for(int l=0;l<n;l++){
            int x=0;
            for(int m=l;m<n;m++){
                x^=arr[m];
                int y=0;
                for(int k=m+1;k<n;k++){
                    y^=arr[k];
                    if(x>y){
                        ans=min(ans,k-l-1);
                    }
                }
            }
        }

        if(ans==INT_MAX) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}