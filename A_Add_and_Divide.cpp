/******************************************************************************
A. Add and Divide
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You have two positive integers a and b.

You can perform two kinds of operations:

a=⌊ab⌋ (replace a with the integer part of the division between a and b)
b=b+1 (increase b by 1)
Find the minimum number of operations required to make a=0.

Input
The first line contains a single integer t (1≤t≤100) — the number of test cases.

The only line of the description of each test case contains two integers a, b (1≤a,b≤109).

Output
For each test case, print a single integer: the minimum number of operations required to make a=0.
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll a, ll b){
    if(a==0){
        cout<<0<<endl;
        return;
    }
    else if(a<b){
        cout<<1<<endl;
        return;
    }
    int ans=INT_MAX;
    int i=0;
    if(b==1)i=1;
    for(;i*i<=a;i++){
        int x=0;
        int c=a;
        while(c>0){
            c=c/(b+i);
            x++;
        }
        ans=min(ans,x+i);
    }
    cout<<ans<<endl;
    return ;
}

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        solve(a,b);
    }

    return 0;
}