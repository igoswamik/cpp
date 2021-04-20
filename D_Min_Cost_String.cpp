#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(int n, string s, int k)
{
    if (n <= k)
    {
        string ans = s.substr(0, n);
        cout << ans << endl;
        return;
    }
    map<string, int> mp;
    string res = "aa";
    mp[res]++;
    for (int i = 2; i < n; i++)
    {
        string s1 = "";
        s1 += res[i - 1];
        char ch = 'a';
        int count = INT_MAX;
        for (int i = 0; i < k; i++)
        {
            string str = s1;
            str += s[i];
            if(mp.count(str)==0){
                count=0;
                ch=s[i];
                break;
            }
            else if (count > mp[str])
            {
                count = mp[str];
                ch = s[i];
            }
        }
        s1 += ch;
        mp[s1]++;
        res += ch;
    }
    cout << res << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    string s = "";
    char ch = 'a';
    for (int i = 0; i < k; i++)
    {
        s += ch;
        ch += 1;
    }
    solve(n, s, k);

    return 0;
}