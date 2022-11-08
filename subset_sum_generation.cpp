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

#define vvi vector<vector<int>>

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

void sub(int idx, int n , vi &v,vvi &ans, vi&a)
{
	ans.pb(v);
	for(int i =idx;i<n;i++)
	{
		if(i>idx and a[i]==a[i-1])
			continue;
		v.pb(a[i]);
		sub(i+1,n,v,ans,a);
		v.pop_back();
	}

}
void solve()
{
	 int n;
	 cin>>n;
	 vi a(n);
	 vi v;
	 vvi ans;
	 for(int i =0;i<n;i++)
	 { 
	 	cin>>a[i];
	 }
	 sort(all(a));
	 sub(0,n,v,ans,a);
	 for(auto &it:ans)
	 {
	 	for(auto &c:it)
	 	{
	 		cout<<c<<" ";
	 	}
	 	cout<<endl;
	 }
	
}
int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
