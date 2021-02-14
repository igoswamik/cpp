/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
typedef long long ll;

ll merge(ll arr[], ll temp[], ll left, ll mid, ll right) 
{ 
    ll inv_count = 0; 
  
    ll i = left; 
    ll j = mid;  
    ll k = left;
    while ((i <= mid - 1) && (j <= right)) 
    { 
        if (arr[i] <= arr[j]) 
            temp[k++] = arr[i++]; 
        else
        { 
            temp[k++] = arr[j++]; 
            inv_count = inv_count + (mid - i); 
        } 
    } 
  
    
    while (i <= mid - 1) 
        temp[k++] = arr[i++]; 
  
    
    while (j <= right) 
        temp[k++] = arr[j++]; 
  
    for (i=left; i <= right; i++) 
        arr[i] = temp[i]; 
  
    return inv_count; 
} 

ll _mergeSort(ll arr[], ll temp[], ll left, ll right) 
{ 
    ll mid, inv_count = 0; 
    if (right > left) 
    { 
        mid = (right + left)/2; 
  
       
        inv_count  = _mergeSort(arr, temp, left, mid); 
        inv_count += _mergeSort(arr, temp, mid+1, right); 
  
        /*Merge the two parts*/
        inv_count += merge(arr, temp, left, mid+1, right); 
    } 
  
    return inv_count; 
} 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        ll temp[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll total=_mergeSort(arr,temp,0,n-1);
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
        
    }

    return 0;
}
