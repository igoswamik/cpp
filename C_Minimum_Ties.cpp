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
        int pair=n-1;
        if(pair%2==0){
            int pve=pair/2;
            for(int i=1;i<=n;i++){
                int t=pve;
                int p=pair;
                while(t && p){
                    cout<<1<<" ";
                    t--;
                    p--;
                }
                while(p){
                    cout<<-1<<" ";
                    p--;
                }
                pair--;
            }
        }
        else{
            int pve=pair/2;
            for(int i=1;i<=n;i++){
                int t=pve;
                int z=1;
                int p=pair;
                while(t && p){
                    cout<<1<<" ";
                    t--;
                    p--;
                }
                while(z && p){
                    cout<<0<<" ";
                    z--;
                    p--;
                }
                while(p){
                    cout<<-1<<" ";
                    p--;
                }
                pair--;
            }
        }
        cout<<endl;
    }
    return 0;
}