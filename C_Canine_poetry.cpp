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
        string arr;
        cin>>arr;
        int count=0;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i-1]!='.' && arr[i-1]==arr[i]){
                count++;
                arr[i]='.';
            }
            else if( i-2>=0 && arr[i-2]!='.' && arr[i]==arr[i-2]){
                count++;
                arr[i]='.';
            }
        }
        cout<<count<<endl;
    }
    return 0;
}