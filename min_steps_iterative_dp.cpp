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

int dp[N];

void solve()
{
	memset(dp,-1,sizeof(dp));
	int n;
	cin>>n;
	dp[0] = 0;
	dp[1] = 0;

	for(int i = 2;i<=n;i++)
	{
		int x = dp[i-1];
		int y,z;
		y = z = INT_MAX;

		if(i%2==0)
			y = dp[i/2];
		if(i%3==0)
			z = dp[i/3];

		dp[i] = min(x,min(y,z))+1;

	}
	cout<<dp[n];
}	
int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
