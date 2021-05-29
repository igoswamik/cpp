#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n)
{
    ll arr[n];
    int negC = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
            negC++;
    }
    //cout << "negC" << negC << endl;
    ll sum = 0;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i = 0; i < n; i++)
    {
        // cout << "i=" << i << "  arr[i]=" << arr[i] << "   ,";
        sum += arr[i];
        if (arr[i] < 0)
        {
            pq.push(arr[i]);
        }
        if (sum < 0)
        {
            ll x = pq.top();
            pq.pop();
            sum += abs(x);
        }
        // cout << "sum=" << sum << "  top=" << pq.top() << endl;
    }
    int notinc = negC - pq.size();
    int ans = n - notinc;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    solve(n);

    return 0;
}