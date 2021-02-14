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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll val;
        cin>>val;
        ll arr[n];
        for(int i=n-1;i>=0;i--)
        {
            arr[i]=val%10;
            val=val/10;
        }
        if(n%2==0)
        {
            int flag=0;
            for(int i=1;i<n;i+=2)
            {
                if(arr[i]%2==1)
                {
                    flag++;
                }
            }
            if(flag==n/2)
            {
                cout<<1<<endl;
            }
            else
            cout<<2<<endl;
            
        }
        else
        {
            int flag=0;
            for(int i=0;i<n;i+=2)
            {
                if(arr[i]%2==0)
                {
                    flag++;
                }
            }
            if(flag==1+(n/2))
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
            
        }
    }

    return 0;
}
