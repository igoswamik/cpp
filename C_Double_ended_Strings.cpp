#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        int j;

        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return i;
    }

    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();
        int maxl = n + m;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string sub = a.substr(i, j - i + 1);
                if (isSubstring(sub, b) != -1)
                {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        int result = maxl - 2 * (ans);
        cout << result << endl;
    }
    return 0;
}