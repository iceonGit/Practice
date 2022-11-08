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
void solve()
{
	string str1,str2;
	cin>>str1>>str2;
	int m = str1.size();
	int n = str2.size();
	for(int i =0;i<=m;i++)
	{
		for(int j =0;j<=n;j++)
		{
			if(i==0||j==0)
			{
				dp[i][j] = 0;
			}
			else
			{
				if(str1[i-1]==str2[j-1])
				{
					dp[i][j] = 1+dp[i-1][j-1];
				}
				else
				{
					dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
				}
			}
		}

	}
	cout<<dp[m][n];	
}	
int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
