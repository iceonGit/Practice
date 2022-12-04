#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>

#include <ext/pb_ds/tree_policy.hpp>

#define int long long
 
#define pb push_back
 
#define rsz resize
 
#define all(x) begin(x), end(x)
 
#define sz(x) (int)(x).size()
 
#define pi pair<int,int>
 
#define vi vector<int>
 
#define mi map<int,int>
 
#define f first

#define s second
 
#define mp make_pair
 
#define endl "\n"

#define zero '\0'

const int mod = 1e9+7;

const int N=1e6+10;

using namespace __gnu_pbds;
using namespace std;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag, tree_order_statistics_node_update>;

 
void usaco(string filename) 
{
  
	freopen((filename + ".in").c_str(), "r", stdin);
	freopen((filename + ".out").c_str(), "w", stdout);
} 


void solve()
{
	int n;
	cin>>n;
	vector<int>nums(n);
	for(int i =0;i<n;i++)
	{
		cin>>nums[i];
	}
	set<int> s;
	for(int num:nums)
	{
		s.insert(num);
	}
	int ans = 0;
	for(int num:s)
	{
		if(s.count(num-1))
		{
			continue;
		}
		int count = 1;
		while(s.count(num+count))
		{
			count++;
		}
		ans = max(ans,count);
	}
	cout<<ans<<endl;
}



int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
