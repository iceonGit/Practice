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

void print(int i,int a[],vi &v,int n)
{
	if(i==n)
	{
		for(int i:v)
		{
			cout<<i<<" ";
		}
		cout<<endl;
		return;
	}
	//take
	v.pb(a[i]);
	print(i+1,a,v,n);
	v.pop_back();

	//not take
	print(i+1,a,v,n);

}
void solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	vi v;
	print(0,a,v,n);
}

int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
