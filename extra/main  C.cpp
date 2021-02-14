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
        ll i=0;
       bool add=true;
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
       /* ll total=_mergeSort(arr,temp,0,n-1);
        ll allowed=((n*(n-1))/2)-1;
        //cout<<total<<" "<<allowed<<endl;
        if(total<=allowed)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        */
        
    }

    return 0;
}
