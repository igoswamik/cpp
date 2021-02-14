/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
typedef long long ll;


int main()
{
    // ll t;
    // cin>>t;
    // while(t--)
    // {
        ll n;
        cin>>n;
        ll arr[n];
        ll temp[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        ll count=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                ll x=arr[i]&arr[j];
                ll y=arr[i]^arr[j];
                if(x>=y)count++;
            }
        }
        cout<<count<<endl;
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
        
    // }

    return 0;
}
