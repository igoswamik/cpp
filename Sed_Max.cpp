#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++){
            int mx=arr[i];
            int sm=-1;
            for(int j=i+1;j<n;j++){
                if(arr[j]>mx){
                    sm=max(sm,mx);
                    mx=arr[j];
                }
                else if(sm==-1 || sm<arr[j]){
                    sm=arr[j];
                }
                if(j-i>=1){
                    int diff=mx-sm;
                    m[diff]++;
                }
            }

        }
        int ans=m.size();
        cout<<ans<<endl;
    }
    return 0;
}