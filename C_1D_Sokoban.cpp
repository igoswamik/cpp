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
       int n,m;
       cin>>n>>m;
       vecot<int>a1,b1,a2,b2;
       for(int i=0;i<n;i++){
           int x;
           cin>>x;
           if(a[i]<0) a1.push_back(x);
           else a2.push_back(x);
       }
       for(int i=0;i<m;i++){
           int x;
           cin>>x;
           if(a[i]<0) b1.push_back(x);
           else b2.push_back(x);
       }
       int ans=0;
       int i=0;j=0;
       while(i<a2.size() &&j<b2.size()){
           if(a2[i]==b2[j]){
               ans++;
               i++;
               j++;
           }
           else if(a2[i]<b2[j]){
               i++;
           }
           else{
               j++;
           }
       }
       i=a1.size()-1;
       j=a2.size()-1;
       while(i>=0 &&j>=0){
           if(a1[i]==b1[j]){
               ans++;
               i--;
               j--;
           }
           else if(a1[i]<b1[j]){
               j--;
           }
           else{
               i--;
           }
       }

       int curr=0;

       int i=0;j=0;
       while(i<a2.size() && j<b2.size() && b2[j]<)
       while(i<a2.size() &&j<b2.size()){
           if(a2[i]==b2[j]){
               ans++;
               i++;
               j++;
           }
           else if(a2[i]<b2[j]){
               i++;
           }
           else{
               j++;
           }
       }
       i=a1.size()-1;
       j=a2.size()-1;
       while(i>=0 &&j>=0){
           if(a1[i]==b1[j]){
               ans++;
               i--;
               j--;
           }
           else if(a1[i]<b1[j]){
               j--;
           }
           else{
               i--;
           }
       }

    }
    return 0;
}