#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    // vector<ll> v;
    // for(int i=0;i<n;i++){
    //     ll x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    int k = 0;
    int i = 1;
    while (k < n)
    {
        if (i % 3 != 0 && i % 10 != 3)
        {
            k++;
        }
        if (k == n)
            break;
        i++;
    }
    cout << i << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        // string str; //for reading empty line
        // getline(cin, str);
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}