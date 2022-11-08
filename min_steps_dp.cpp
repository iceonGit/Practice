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

int dec(int n,int dp[])
{
	if(n==1)
	{
		return 0;
	}
	int x = 0,y=INT_MAX,z= INT_MAX;

	if(dp[n]!=-1)
		return dp[n];
	x = dec(n-1,dp);
	if(n%2==0)
		y = dec(n/2,dp);
	if(n%3==0)
		z = dec(n/3,dp);
	dp[n] = min(x,min(y,z))+1;
	return dp[n];
}
void solve()
{
	memset(dp,-1,sizeof(dp));
	int n;
	cin>>n;
	cout<<dec(n,dp);
	// for(int i =0;i<=n;i++)
	// {
	// 	cout<<dp[i]<<endl;
	// }
}	
int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
