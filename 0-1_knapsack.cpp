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

#define zero '\0'
#define endl "\n"

const int N = 1e5+10;

using namespace __gnu_pbds;
using namespace std;

template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag, tree_order_statistics_node_update>;


void usaco(string filename) 
{
  
	freopen((filename + ".in").c_str(), "r", stdin);
	freopen((filename + ".out").c_str(), "w", stdout);
} 
int dp[100][100];

int knapsack(int n,int w,vi &price , vi &wts)
{
	if(n==0 or w==0)
	{
		return 0;
	}
	if(dp[n][w]!=-1)
	{
		return dp[n][w];
	}
	if(wts[n-1]>w)
	{
		return dp[n][w] = knapsack(n-1,w,price,wts);
	}
	int include = price[n-1] + knapsack(n-1,w-wts[n-1],price,wts);
	int exclude = knapsack(n-1,w,price,wts);

	return dp[n][w] = max(include,exclude);

}	

void solve()
{
	memset(dp,-1,sizeof(dp));
	int n = 4,w = 10;
	vi price(n),wts(n);
	for(int i =0;i<n;i++)
	{
		cin>>wts[i];
	}
	for(int i =0;i<n;i++)
	{
		cin>>price[i];
	}
	cout<<knapsack(n,w,price,wts);


	
}	
int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
