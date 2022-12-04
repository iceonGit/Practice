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

int grid(int i,int j,int n,int m)
{
	if(i==(n-1) and j==(m-1))
	{
		return 1;
	}
	if(i>=n or j>=m)
	{
		return 0;
	}
	else
	{
		return grid(i+1,j,n,m) + grid(i,j+1,n,m);
	}

}
void solve()
{
	int m,n;
	cin>>m>>n;
	int k = grid(0,0,m,n);
	cout<<k<<endl;
}

int32_t main()
{
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
