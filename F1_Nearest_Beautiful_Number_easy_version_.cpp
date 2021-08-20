#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<string> v;

string Get(string s, int i, int k)
{
    // cout << "s===" << s << "  i==" << i << endl;
    unordered_map<int, int> m;
    int mini = -1;
    for (int j = 0; j < i; j++)
    {
        int x = s[j] - 48;
        m[x]++;
        if (mini == -1 || mini > x)
        {
            mini = x;
        }
    }
    // cout << "i==" << i << "msiz=" << m.size() << "  k=" << k << endl;
    if (m.size() == k)
    {
        for (int j = i; j < s.size(); j++)
        {
            s[j] = mini + 48;
        }
    }
    else
    {
        for (int j = i; j < s.size(); j++)
        {
            s[j] = 48;
        }
    }

    // cout << "res s===" << s << endl;
    return s;
}
void solve(ll n)
{
    string s = to_string(n);
    ll k;
    cin >> k;
    unordered_map<int, int> m;
    priority_queue<pair<int, int>> pq;
    int i = 0;
    for (; i < s.size(); i++)
    {
        int x = s[i] - 48;
        if (m.count(x) > 0)
        {
            continue;
        }
        else
        {

            m[x]++;
            if (m.size() > k)
            {
                m.erase(x);
                break;
            }
            pq.push(make_pair(i, x));
        }
    }

    // cout << "s=" << s << "  i=" << i << endl;
    if (i == s.size())
    {
        cout << s << endl;
        return;
    }

    int mnum = -1;
    int minall = INT_MAX;
    int y = s[i] - 48;

    vector<int> vec;

    for (auto it : m)
    {
        if (it.first > y && (mnum == -1 || mnum > it.first))
        {
            mnum = it.first;
        }

        minall = min(minall, it.first);
        vec.push_back(it.first);
    }

    sort(vec.begin(), vec.end());
    // cout << "  minall=" << minall << "   mnum=" << mnum << "  y=" << y << endl;

    if (mnum == -1)
    {
        string sol = "";
        for (int z = i - 1; z >= 0; z--)
        {
            int nn = s[z] - 48;
            auto it = upper_bound(vec.begin(), vec.end(), nn);
            if (it != vec.end())
            {

                int num = *it;
                string ns = s;
                ns[z] = num + 48;
                string sol = Get(ns, z + 1, k);
                break;
            }
        }

        //increment last occurance
        int e = pq.top().second;
        int ind = pq.top().first;
        // cout << "  e=" << e << " ind=" << ind << endl;
        int change = e + 1;
        char ch = e + 48;
        char cha = change + 48;
        s[ind] = cha;
        string res = Get(s, ind + 1, k);
        if (sol == "")
        {
            cout << res << endl;
        }
        else
        {
            string final = res < sol ? res : sol;
            cout << final << endl;
        }

        return;

        // for (int z = 0; z < i; z++)
        // {
        //     if (s[z] == ch)
        //         s[z] = cha;
        // }

        // if (minall == e)
        // {
        //     minall = e + 1;
        // }

        // char minch = minall + 48;
        // for (int z = ind + 1; z < s.size(); z++)
        // {
        //     s[z] = minch;
        // }
        // cout << s << endl;
    }
    else
    {
        char ch = mnum + 48;
        s[i] = ch;
        string res = Get(s, i + 1, k);
        cout << res << endl;
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
        ll n;
        cin >> n;
        solve(n);
    }
    return 0;
}