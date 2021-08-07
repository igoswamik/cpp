/**[Q]:
 1* given a number in binary convert it to the corresponding number in base 6.
 2* The array is given in reverse i.e.     should be read as 0100 (base 2)
 * **/

/***********************method1*****************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define MOD 1000000007
#define mod 998244353
#define ar array
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

//#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void Solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    bool all_zero = true;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            all_zero = false;
    }
    if (all_zero)
    {
        cout << 0 << "\n";
        return;
    }

    // a = 0010 --> 0100
    reverse(v.begin(), v.end());
    vector<ll> res(105);
    for (ll i = 0; i < n; i++)
    {
        // cout << "a[i]==" << a[i] << endl;
        if (v[i] == 0)
        {
            // convert number to 2*n
            ll carry = 0;
            for (int j = 0; j < 104; j++)
            {
                ll num_here = 2 * res[j] + carry;
                carry = num_here / 6;
                res[j] = num_here % 6;
                cout << res[j] << " ";
            }
            assert(carry == 0);
        }
        else
        {
            // convert number to 2*n + 1
            ll carry = 0;
            for (int j = 0; j < 104; j++)
            {
                ll num_here = 2 * res[j] + carry;
                carry = num_here / 6;
                res[j] = num_here % 6;
                cout << res[j] << " ";
            }
            cout << endl;
            carry = 1;
            for (int j = 0; j < 104; j++)
            {
                ll num_here = res[j] + carry;
                carry = num_here / 6;
                res[j] = num_here % 6;
                cout << res[j] << " ";
            }
            assert(carry == 0);
        }
        cout << endl;
    }
    assert(res.back() == 0);
    while (res.back() == 0)
        res.pop_back();

    for (ll i = 0; i < (ll)res.size(); i++)
    {
        if (i > 0)
            cout << " ";
        cout << res[i];
    }
    cout << endl;
}

int main()
{
    fast_io;

    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }

    return 0;
}

/************method2****************************/
// #include <bits/stdc++.h>
// #define M 1000000007
// #define pb push_back
// #define ll long long int
// using namespace std;

// vector<int> add(vector<int> a, vector<int> b)
// {
//     vector<int> ans;
//     int carry = 0;
//     while (a.size() != b.size())
//     {
//         if (a.size() < b.size())
//             a.pb(0);
//         else
//             b.pb(0);
//     }
//     for (int i = 0; i < a.size(); i++)
//     {
//         int res = a[i] + b[i] + carry;
//         carry = res / 6;
//         res = res % 6;
//         ans.pb(res);
//     }
//     while (carry != 0)
//     {
//         ans.pb(carry % 6);
//         carry /= 6;
//     }
//     return ans;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int l;
//         cin >> l;
//         vector<int> num;
//         while (l--)
//         {
//             int te;
//             cin >> te;
//             num.pb(te);
//         }

//         vector<int> ans;
//         ans.pb(0);
//         vector<int> pow;
//         pow.pb(1);
//         for (int i = 0; i < num.size(); i++)
//         {
//             if (num[i])
//                 ans = add(ans, pow);
//             pow = add(pow, pow);
//         }
//         for (auto it : ans)
//             cout << it << " ";
//         cout << "\n";
//     }
//     return 0;
// }
