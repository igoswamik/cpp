#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b,k;
    cin>>a>>b>>k;
    if(k>=a || (b==1 && k>=1)){
        cout<<"No"<<endl;
    }
    else{
        string x="";
        for(int i=0;i<b;i++){
            x+='1';
        }
        for(int i=0;i<a;i++){
            x+='0';
        }
        string y=x;
        y[b-1]='0';
        y[b-1+k]='1';
        cout<<"Yes"<<endl;
        cout<<x<<endl;
        cout<<y<<endl;

    }
        return 0;
}