#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s;
    cin >> s;
    ll n = s.length();
    sort(s.begin(), s.end());

    int arr[27] = {0};
    for (int i = 0; i < n; i++)
    {
        int x = s[i] - 'a';
        arr[x]++;
    }

    ll sm = -1, left = 0, smi = -1;
    ll singleOcc = -1;
    for (int i = 0; i < 27; i++)
    {
        if (arr[i] > 0)
        {
            if (arr[i] == 1 && singleOcc == -1)
                singleOcc = i;
            if (sm == -1)
            {
                sm = arr[i];
                smi = i;
            }
            else
                left += arr[i];
        }
    }
    // cout << "sm=" << sm << " left=" << left << endl;
    if (singleOcc != -1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == singleOcc + 'a')
            {
                swap(s[0], s[i]);
                sort(s.begin() + 1, s.end());
                cout << s << endl;
                return;
            }
        }
    }

    if (sm == 1 || sm == 2)
    {
        cout << s << endl;
        return;
    }

    if (sm - 2 <= left)
    {
        string res = "";
        res += smi + 'a';
        res += smi + 'a';
        sm -= 2;
        ll next = -1, nc = 0;
        for (int i = smi + 1; i < 27; i++)
        {
            if (arr[i] > 0)
            {
                next = i;
                nc = arr[i];
                break;
            }
        }
        while (sm > 0)
        {
            if (nc == 0)
            {
                for (int i = next + 1; i < 27; i++)
                {
                    if (arr[i] > 0)
                    {
                        next = i;
                        nc = arr[i];
                        break;
                    }
                }
            }
            res += next + 'a';
            res += smi + 'a';
            sm--;
            nc--;
        }
        while (nc >= 0)
        {
            if (nc == 0)
            {
                for (int i = next + 1; i < 26; i++)
                {
                    if (arr[i] > 0)
                    {
                        next = i;
                        nc = arr[i];
                        break;
                    }
                }
            }

            if (nc == 0)
            {
                break;
            }
            res += next + 'a';
            nc--;
        }
        cout << res << endl;
    }
    else
    {
        for (int j = 3; j < n; j++)
        {
            if (s[j] != s[0])
            {
                swap(s[1], s[j]);
                break;
            }
        }
        cout << s << endl;
        return;
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

        solve();
    }
    return 0;
}