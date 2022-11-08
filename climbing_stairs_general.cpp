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
	int n,k;
	cin>>n>>k;
	dp[0] = 1;
	for(int i =1;i<=n;i++)
	{
		int ans = 0;
		for(int j =1;j<=k;j++)
		{
			if(i-j<0)
			{
				continue;
			}
			else
				ans+=dp[i-j];
		}
		dp[i] = ans;
	}
	cout<<dp[n]<<endl;
}	
int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
