#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MAXN=10000001;
unordered_map<int,int> mp;
int spf[10000001]; 
  
// Calculating SPF (Smallest Prime Factor) for every 
// number till MAXN. 
// Time Complexity : O(nloglogn) 
void sieve() 
{ 
    spf[1] = 1; 
    for (int i=2; i<MAXN; i++) spf[i] = i; 
  
    // separately marking spf for every even 
    // number as 2 
    for (int i=4; i<MAXN; i+=2) spf[i] = 2; 
        
  
    for (int i=3; i*i<MAXN; i++) 
    { 
        // checking if i is prime 
        if (spf[i] == i) 
        { 
            // marking SPF for all numbers divisible by i 
            for (int j=i*i; j<MAXN; j+=i) {
                     if (spf[j]==j) 
                    spf[j] = i; 
            }
               
        } 
    } 
} 
  
vector<int> getFactorization(int x) 
{ 
    vector<int> ret; 
    while (x != 1) 
    { 
        ret.push_back(spf[x]); 
        x = x / spf[x]; 
    } 
    return ret; 
} 
bool check(int x){
    //cout<<"x="<<x<<endl;
       vector<int> v=getFactorization(x);
       unordered_map<int,int> mm;
       for(int i=0;i<v.size();i++){
           mm[v[i]]++;
       }
       auto it=mm.begin();
       int xx=1;
       while(it!=mm.end()){
           int a=it->first;
           int b=it->second;
           if(b%2==1){
                   xx*=a;
           }
           it++;
       }
       if(mp.count(xx)>0){
           mp.clear();
            mp[xx]++;
           return true;
       } 
        mp[xx]++;
       // cout<<"xx="<<xx<<endl;
       return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    ll t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
                mp.clear();
        int count=1;
        int i=0;

        while(i<n){
            int x=arr[i];
            if(check(x)){
                //cout<<"i="<<arr[i]<<endl;
                count++;
            }
            i++;
        } 
        cout<<count<<endl;      
    }
    return 0;
}


