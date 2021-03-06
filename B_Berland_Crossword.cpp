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
       int n,u,r,d,l;
       cin>>n>>u>>r>>d>>l;
       int x=n-2,v=0,hr=0;
       if(u>x) v+=u-x;
       if(d>x) v+=d-x;

       if(r>x) hr+=r-x;
       if(l>x) hr+=l-x;

       //cout<<v<<hr<<endl;
       if(((u==0||d==0)&& (r==n||l==n)) || ((u==0&&d==0)&& (r>=n-1 || l>=n-1)) || ((u==1||d==1)&& (r==n&&l==n)) || ((u==1&&d==1)&& (r==n&&l>n-2 ||l==n&&r>n-2)) ){
           cout<<"NO"<<endl;
       }
       else if(((r==0||l==0)&& (u==n||d==n)) || ((r==0&&l==0)&& (u>=n-1 || d>=n-1)) || ((r==1||l==1)&& (u==n&&d==n)) || ((r==1&&l==1)&& (u==n&&d>n-2 ||d==n&&u>n-2)) ){
           cout<<"NO"<<endl;
       }
       else if((v<=2 && r+l>=v)  || (v==3 &&((r>=2&& l>=1)||(l>=2 && r>=1)))  || (v==4 && r>=2 &&l>=2)){
            if((hr<=2 && u+d>=hr)  || (hr==3 &&((u>=2&& d>=1)||(d>=2 && u>=1)))  || (hr==4 && u>=2 &&d>=2)){
                    cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
       }
       else{
           cout<<"NO"<<endl;
       }
    }
    return 0;
}