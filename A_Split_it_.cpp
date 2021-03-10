#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool solve(string s,int k){
    int i=0,j=s.size()-1;
        while(k>0 && i<j){
            if(s[i]!=s[j]){
                
                return false;;
            }
            k--;
            i++;
            j--;
        }

        if(k>0|| i>j) return false;

        return true;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(solve(s,k)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}