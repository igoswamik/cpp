#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long double ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> x,y;;
        for(int i=1;i<=2*n;i++){
            int x1,y1;
            cin>>x1>>y1;
            if(x1==0){
                y1=abs(y1);
                y.push_back(y1);
            }
            else{
                x1=abs(x1);
                x.push_back(x1);
            }
        }

        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        ll sum=0.000000000;
        for(int i=0;i<n;i++){
            ll x1=(ll)x[i];
            ll y1=(ll)y[i];
            ll dist=sqrt(x1*x1+y1*y1);
            sum+=dist;
        }
        
        cout<<fixed << setprecision(12)<<sum<<endl;
    }
    return 0;
}