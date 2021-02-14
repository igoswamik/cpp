#include <iostream>
#include<bits/stdc++.h>
#include<utility>
#include<vector>
using namespace std;

int helper(vector<pair<int,int>> &v,int n,int pi)
{
    vector<pair<int,int>> :: iterator it;
    it=lower_bound(v.begin(),v.end(),make_pair(pi,numeric_limits<int>::min()));
    int ans=0;
    if(it==v.begin())
    {
        if(pi==it->first)ans=0;
        else ans=(it->first-pi);
    }
    else if(it==v.end())
    {
        --it;
        if(pi>=it->first && pi<it->second)
        {
            ans= 0;
        }
        else
        {
            ans=-1;
        }
    }
    else if(pi==it->first)
    {
        ans= 0;
    }
    else 
    {
        int next=it->first;
        --it;
        if(pi>=it->first && pi<it->second) ans= 0;
        else ans=(next- it->second);
    }
    return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{ 
    	int n,m;
    	cin>>n>>m;
    	vector<pair<int,int> > v;
    
    	for(int i=0;i<n;i++)
    	{  
    	    int l,r;
    	    cin>>l>>r;
    	    v.push_back(make_pair(l,r));
    	}
    	sort(v.begin(),v.end());
    	for(int i=0;i<m;i++)
    	{
    	    int p;
    	    cin>>p;
    	    int ans=helper(v,n,p);
    	    cout<<ans<<endl;
    	}
	}
	return 0;
}
