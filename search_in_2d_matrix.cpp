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
	int m,n,target,c=0;
	cin>>m>>n>>target;
	int a[m][n];
	for(int i = 0;i<m;i++)
	{
		for(int j = 0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int low = 0;
	int high = (m*n)-1;
	while(low<=high)
	{
		int mid = (low + (high-low)/2);
		if(a[mid/n][mid%n]==target)
		//to get 2d index from a 2d array indexed
		//like a 1d array divide the index by no.
		//of columns to get row index and modulo for
		//column index
		{
			c=1;
			break;
		}
		if(a[mid/n][mid%n]<target)
		{
			low = mid + 1;
		}
		else
		{
			high = mid-1;
		}
	}
	cout<<c<<endl;
}

int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
