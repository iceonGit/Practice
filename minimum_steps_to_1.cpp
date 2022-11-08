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
int dec(int n)
{
	if(n==1)
		return 0;
	if(dp[n]!=0)
		return dp[n];
	int x=0,y=INT_MAX,z=INT_MAX;
	
	x = dec(n-1);
	if(n%2==0)
	{
		y = dec(n/2);
	}
	if(n%3==0)
	{
		z= dec(n/3);
	}
	return dp[n]=1+min(x,min(y,z));

}
void solve()
{
	int n;
	cin>>n;
	cout<<dec(n);
}	
int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
