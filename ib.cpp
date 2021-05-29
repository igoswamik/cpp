#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int threeSumClosest(vector<int> &A, int B)
{
    int sum = INT_MAX;
    int n1 = A.size();
    sort(A.begin(), A.end());
    for (int i = 0; i < n1; i++)
    {
        int j = i + 1;
        int k = n1 - 1;
        while (j < k)
        {
            // cout<<"i,j,k"<<i<<j<<k<<"  A[i]="<<A[i]<<" A[j]="<<A[j]<<" A[k]="<<A[k]<<"   ";
            int curr_sum = A[i] + A[j] + A[k];

            if (sum == INT_MAX)
            {
                sum = curr_sum;
            }
            else if (abs(sum - B) > abs(curr_sum - B))
            {
                sum = curr_sum;
            }

            if (curr_sum > B)
            {
                k--;
            }
            else
            {
                j++;
            }

            cout << " curr_sum=" << curr_sum << "   sum=" << sum << endl;
        }
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    vector<int> A{-5, 1, 4, -7, 10, -7, 0, 7, 3, 0, -2, -5, -3, -6, 4, -7, -8, 0, 4, 9, 4, 1, -8, -6, -6, 0, -9, 5, 3, -9, -5, -9, 6, 3, 8, -10, 1, -2, 2, 1, -9, 2, -3, 9, 9, -10, 0, -9, -2, 7, 0, -4, -3, 1, 6, -3};
    
    int ans = threeSumClosest(A, -1);

    cout << "ans==" << ans << endl;
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    //     ll n;
    //     cin >> n;
    //     solve(n);
    // }
    return 0;
}