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
	int n,k = 1, mx=1,mn=1,tmp = 1;
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}

	int max_val = *max_element(a,a+n);

	for(int i =0;i<n;i++)
	{
		if(a[i]==0)
		{
			mx = 1;
			mn = 1;
		}
		else
		{
			tmp = mx;
			mx = max(a[i],max(mx*a[i],mn*a[i]));
			//we use a temp variable because the value of mx is 
			//changed in the above line
			mn = min(a[i],min(tmp*a[i],mn*a[i]));
			max_val = max(max_val,mx);
	
		}
		
		
	}
	cout<<max_val<<endl;
}

int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
