#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool FindAllElements(int n, int k) 
{ 
    // Initialising the sum with k 
    int sum = k; 
  
    // Initialising an array A with k elements 
    // and filling all elements with 1 
    int A[k]; 
    fill(A, A + k, 1); 
  
    for (int i = k - 1; i >= 0; --i) { 
  
        // Iterating A[] from k-1 to 0 
        while (sum + A[i] <= n) { 
  
            // Update sum and A[i] 
            // till sum + A[i] is less than equal to n 
            sum += A[i]; 
            A[i] *= 2; 
        } 
    } 
  
    // Impossible to find the combination 
    if (sum != n) { 
        return false; 
    } 
  
    // Possible solution is stored in A[] 
    else { 
        return true;
    } 
} 
void solve(ll n,ll p){
    int y=1;
   while(y<32){
        ll x=n-p*y;
        if(x<=0){
            y++;
            continue;
        }

        if(FindAllElements(x,y)){
            cout<<y<<endl;
            return;
        }
        y++;
   }


    cout<<-1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll t;
    // cin>>t;
    // while(t--){
        ll n,p;
        cin>>n>>p;
        solve(n,p);
        
   // }
    return 0;
}