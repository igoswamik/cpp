#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll helper(ll l)
{
    ll count = 0;
    string pre = to_string(l);
    l += 1;
    string post = to_string(l);
    int i = pre.size() - 1, j = post.size() - 1;
    while (i >= 0 && j >= 0)
    {
        count += pre[i] != post[j] ? 1 : 0;
        i--;
        j--;
    }
    count += j >= 0 ? 1 : 0;
    return count;
}
int last(int l)
{
    //cout << l << endl;
    string s = to_string(l);
    int t = 2;
    return t;
    // return 2;
}
void extracount(ll t, ll &count)
{
    cout << t << endl;
    // string str = to_string(t);
    // cout <<str<<endl;
    // int i = str.size() - 1;
    // while (i >= 0 && str[i] == '0')
    //     count++;
}
void solve(ll l, ll r)
{
    ll count = 0;
    while (l < r && l % 10 != 0)
    {
        l++;
        count++;
    }
    //cout << l % 10 << endl;

    while (l < r)
    {
        ll temp = l;
        extracount(temp, count);
        ll x = min((ll)10, r - l);
        l += x;
        count += x;
    }
    // ll count = 0;
    // cout << "l,r" << l << " " << r << endl;
    // while (l < r)
    // {

    //     int rem = last(l);
    //     //cout << "rem=" << rem << endl;
    //     if (rem == 9)
    //     {
    //         count += helper(l);
    //         l++;
    //         cout << "l=" << l << endl;
    //     }
    //     else
    //     {
    //         int x = 9 - rem;
    //         int aa = min(x, r - l);
    //         x = max(aa, 1);
    //         l += x;
    //         count += x;
    //     }
    // }
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        solve(l, r);
    }
    return 0;
}