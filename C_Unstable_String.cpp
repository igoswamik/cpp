#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// long long help(string s){
//     long long count=1,pre=1;
//     for(int i=1;i<s.length();i++){
//         if(s[i]==s[i-1]){
//             count+=1;
//             pre=1;
//         }
//         else if(s[i]=='?' ||s[i-1]=='?'){
//             count+=1;
//             pre=1;
//         }
//         else{

//         }
//     }
// }
void solve(string s)
{
    ll n = s.length();
    vector<int> v(n, 1);
    int i = 1, qc = 0;
    if (s[0] == '?')
        qc = 1;
    while (i < s.length())
    {
        if (s[i] == '?')
        {
            qc++;
            v[i] += v[i - 1];
        }
        else
        {

            if (s[i - 1] != '?')
            {
                if (s[i] != s[i - 1])
                {
                    v[i] += v[i - 1];
                }
            }
            else
            {
                int j = i - qc - 1;
                if (j >= 0)
                {
                    if (s[i] == s[j])
                    {
                        if (qc % 2 == 1)
                            v[i] += qc + v[j];
                        else
                            v[i] += qc;
                    }
                    else
                    {
                        if (qc % 2 == 0)
                            v[i] += qc + v[j];
                        else
                            v[i] += qc;
                    }
                }
                else
                {
                    v[i] += qc;
                }
            }
            qc = 0;
        }
        i++;
    }
    long long ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ans += v[i];
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}