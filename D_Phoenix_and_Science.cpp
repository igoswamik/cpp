#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll N)
{
    vector<ll> inc;
    //i is the increment in total sum more splits => more increment
    //construct sequence 1, 2, 4, ... while sum <= N
    for(int i=1;i<=N;i*=2){
        inc.push_back(i);
        N-=i;
    }
    //if sum is not N, we insert and sort
    if(N>0){
        inc.push_back(N);
        sort(inc.begin(),inc.end());
    }
   //now   inc[i] is the increment in sum on ith night and inc[i]-inc[i-1] is the number of splits took place 
    cout<<inc.size()-1<<endl;
    for(int i=1;i<inc.size();i++){
        cout<<inc[i]-inc[i-1]<<" ";
    }
    cout<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        solve(n);
    }
}