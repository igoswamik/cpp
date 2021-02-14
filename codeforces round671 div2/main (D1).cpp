/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<bits/stdc++.h>
#include<queue>
using namespace std;
typedef long long ll; 
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    priority_queue<ll> maxp;
    priority_queue<ll,vector<ll>,greater<ll>> minp;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        maxp.push(arr[i]);
        minp.push(arr[i]);
    }
    ll s=0,e=n-1;
    int even=0,k=0;
    while(s<=e)
    {
        if(even%2==0)
        {
            arr[e]=maxp.top();
            k++;
            if(k==n)break;
            e--;
            maxp.pop();
            arr[s]=maxp.top();
            k++;
            if(k==n)break;
            s++;
            maxp.pop();
            
        }
        else
        {
            arr[s]=minp.top();
            k++;
            if(k==n)break;
            s++;
            minp.pop();
            arr[e]=minp.top();
            k++;
            if(k==n)break;
            e--;
            minp.pop();
        }
        even++;
    }
    ll count=0;
    for(ll i=1;i<n-1;i++)
    {
        if(arr[i]<arr[i+1]&& arr[i]<arr[i-1])count++;
    }
    cout<<count<<endl;
    for(ll i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
