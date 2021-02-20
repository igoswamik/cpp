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
        ll n;
        cin>>n;
        int i=n;
        int a=1;
        long long sum1=0,sum2=0;
        while(i>=1){
            if(i<=n-1 && a<=(n/2)){
                sum2+=1<<i;
                a++;
            }
            else{
                sum1+=1<<i;
            }
            i--;
            
        }
        ll diff=abs(sum1-sum2);
        cout<<diff<<endl;
    }
    return 0;
}