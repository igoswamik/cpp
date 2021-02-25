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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_map<int,int> m;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int b=arr[j]-arr[i];
                if(m.count(b)==0){
                    m[b]++;
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}