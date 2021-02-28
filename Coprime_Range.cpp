#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)  
{  
      
    if (n <= 1)  return false;  
    if (n <= 3)  return true;  
    
    if (n%2 == 0 || n%3 == 0) return false;  
    
    for (int i=5; i*i<=n; i=i+6)  
        if (n%i == 0 || n%(i+2) == 0)  
           return false;  
    
    return true;  
}  
int main()
{
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int prime=r+1;
        bool found = false; 
  
    while (!found) { 
        prime++; 
  
        if (isPrime(prime)) 
            found = true; 
    } 
    cout<< prime<<endl; 
    }
    return 0;
}