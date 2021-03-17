#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        int nn,kk;
        cin>>nn>>kk;
        
        int n=nn-(kk-3),k=3,a,b,c;
        int x=n/2;
        
        while(x>=1){
            int y=n-x;
            a=x;
            int z=n-2*a;
            if(z>=1 && a%z==0){
                b=a;
                c=z;
                break;
            }
            if(y%2==0){
                b=c=y/2;
                if(a%b==0) break;
            } 
            x--;
        }
        cout<<a<<" "<<b<<" "<<c<<" ";
        for(int i=0;i<kk-3;i++) cout<<1<<" ";

        cout<<endl;
        
    }
    return 0;
}


 