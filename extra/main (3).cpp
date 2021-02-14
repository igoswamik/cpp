/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{  int t;
cin>>t;
while(t--)
{
    long long x,y,k;
    cin>>x>>y>>k;
    long long count;
    count=(((y+1)*k)-1)/(x-1);
    cout<<count<<endl;
}
    return 0;
}
