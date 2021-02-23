#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin>>t;
    // while(t--){
        ll a,b,x,y;
        cin>>a>>b;
        if(a+1==b){
            cout<<a<<" "<<b<<endl;
        }
        else if(a==b){
            cout<<a*10<<" "<<b*10+1<<endl;
        }
        else if(a==9 && b==1){
            cout<<9<<" "<<10<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
    // }
    return 0;
}