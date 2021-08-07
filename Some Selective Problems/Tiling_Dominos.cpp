//using recursive relation approach for for 3*m grid and 2*1 domino

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    //find number of ways to fill 2*1 domino tiles in 3*n grid
    ll f[n + 1], g[n + 1];
    f[0] = 1;
    f[1] = 0;
    g[0] = 0;
    g[1] = 1;
    for (ll col = 2; col <= n; col++)
    {
        f[col] = f[col - 2] + 2 * g[col - 1];
        g[col] = f[col - 1] + g[col - 2];
    }
    cout << f[n] << endl;
    
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

//generalized approach from 3*m grid and 2*1 domino// https://www.youtube.com/watch?v=yn2jnmlepY8
//most generalized approach from n*m grid and 2*1 domino//https://coderevilbuggy.blogspot.com/2018/05/broken-profile-dynamic-programming.html