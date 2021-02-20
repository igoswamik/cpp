#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n,ll k){
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   string arr[k];
   for(int i=0;i<k;i++){
       arr[i]=s[i];
   }
   if(s[0]!=s[k-1]){
       cout<<arr[k-1]<<endl;
       return;
   }
   
   bool flag=false;
    if(n>k){
        char ch=s[k];
        for(int i=k;i<n;i++){
            if(s[i]!=ch) {
                flag=true;
                break;
            }
        }

    }
    int j=k;
     if(flag==false){
         while(j<n){
             for(int i=0;i<k && j<n;i++){
                 arr[i]+=s[j];
                 j++;
             }
         }
     }
       arr[0]+=s.substr(j);
   
   sort(arr,arr+k);
   cout<<arr[k-1]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        solve(n,k);
        
       
    }
    return 0;
}