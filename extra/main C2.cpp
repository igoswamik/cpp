/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<pair<ll,ll>> v;
        v.push_back(make_pair(0,0));
        for(ll i=0;i<q;i++)
        {
            ll f,s;
            cin>>f>>s;
            v.push_back(make_pair(f,s));
        }
        ll l=v.size();
        ll j=0;
        
        while(j<l)
        {
            ll f=v[j].first;
            ll s=v[j].second;
            swap(arr[f-1],arr[s-1]);
            
             ll i=0;
       ll sum=0;
       ll maxsum=INT_MIN;
       while(i<n)
       {
           ll mx=INT_MIN;
           while(i<n&&arr[i]>mx)
           {
               mx=arr[i];
               i++;
               
           }
           sum+=mx;
           if(sum>maxsum)
           {
               maxsum=sum;
           }
           ll mn=INT_MAX;
           while(i<n&& arr[i]<mn)
           {
               mn=arr[i];
               i++;
           }
           if(i<n)
           {
               sum-=mn;
           }
           
       }
       cout<<max(maxsum,sum)<<endl;
            j++;
        }
    }

    return 0;
}
