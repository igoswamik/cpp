/*******************************************************************************************************************
 * D. Pythagorean Triples
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
A Pythagorean triple is a triple of integer numbers (a,b,c) such that it is possible to form a right triangle with the lengths of the first cathetus, the second cathetus and the hypotenuse equal to a, b and c, respectively. An example of the Pythagorean triple is (3,4,5).

Vasya studies the properties of right triangles, and he uses a formula that determines if some triple of integers is Pythagorean. Unfortunately, he has forgotten the exact formula; he remembers only that the formula was some equation with squares. So, he came up with the following formula: c=a2−b.

Obviously, this is not the right formula to check if a triple of numbers is Pythagorean. But, to Vasya's surprise, it actually worked on the triple (3,4,5): 5=32−4, so, according to Vasya's formula, it is a Pythagorean triple.

When Vasya found the right formula (and understood that his formula is wrong), he wondered: how many are there triples of integers (a,b,c) with 1≤a≤b≤c≤n such that they are Pythagorean both according to his formula and the real definition? He asked you to count these triples.

Input
The first line contains one integer t (1≤t≤104) — the number of test cases.

Each test case consists of one line containing one integer n (1≤n≤109).

Output
For each test case, print one integer — the number of triples of integers (a,b,c) with 1≤a≤b≤c≤n such that they are Pythagorean according both to the real definition and to the formula Vasya came up with.
 *****************************************************************************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        // a^2+b^2=c^2 && a^2-b=c => b(b+1)=c(c-1) =>  c=b+1  && a^2=1+2b=2c-1 =>c=(a^2+1)<=n =>a<=sqrt(2*n-1)   
        //We can see that there is only one correct value of b (and c) for every odd value of a (greater than 1)
        ll count=0;
        for(ll a=3;a*a<=2*n-1;a+=2){
           count++;
        }
        cout<<count<<endl;
        
    }
    return 0;
}