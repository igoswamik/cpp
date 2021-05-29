#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(int n, string s)
{
    int zc=0;
    for(int i=0;i<n;i++) zc+=(s[i]=='0');

    if(zc>1&&n%2==1&&s[n/2]=='0'){
        cout<<"ALICE"<<endl;
    }
    else{
        cout<<"BOB"<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        solve(n, s);
    }
    return 0;
}