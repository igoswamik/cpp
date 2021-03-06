#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
unordered_map<int,int> mp;

bool isvalid(string s,int h,int m){
    int h1,h2,m1,m2,h11,h22,m11,m22;
    h1=s[0]-48;
    h2=s[1]-48;
    m1=s[3]-48;
    m2=s[4]-48;
   
    if(mp.count(h1)==0||mp.count(h2)==0||mp.count(m1)==0||mp.count(m2)==0){
        return false;
    }
    h11=mp[h1];
    h22=mp[h2];
    m11=mp[m1];
    m22=mp[m2];
    if(m22*10+m11>=h || h22*10+h11>=m){ 
        return false;
    }
    return true;
}

void increment(string& s,int h,int m){
    int x=stoi(s.substr(0,2));
    int y=stoi(s.substr(3));
    y+=1;
    if(y==m){
        x+=1;
        y=0;
    }
    if(x>=h){
        x=0;
    }
    s="";
    int h1,h2,m1,m2;
    h2=x%10;
    x/=10;
    h1=x%10;

     m2=y%10;
    y/=10;
    m1=y%10;
    s+=to_string(h1)+to_string(h2)+":"+to_string(m1)+to_string(m2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    mp.clear();
    mp[0]=0;
    mp[1]=1;
    mp[2]=5;
    mp[5]=2;
    mp[8]=8;
    ll t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        string s;
        cin>>s;
        int x=stoi(s.substr(0,2));
        int i=100;

        while(i--){
            bool flag=false;
            int j=stoi(s.substr(3));
           // cout<<j<<endl;
            while(j<=m){
                if(isvalid(s,h,m)){
                    flag=true;
                    break;
                }
                increment(s,h,m);
                //cout<<s<<"=s   ";
                j++;
            }
            if(flag){
                break;
            }
        }

        cout<<s<<endl;
        
    }
    return 0;
}