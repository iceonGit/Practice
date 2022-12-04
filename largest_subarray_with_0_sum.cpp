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
	int n;
	cin>>n;
	int a[n],sum = 0,ans=0;
	unordered_map<int,int>m;
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		cout<<sum<<" ";
		if(sum==0)
		{
			ans = i+1;
		}
		else
		{
			if(m.count(sum))
			{
				//we're not adding duplicate keys
				//instead we check that if the same prefix
				//sum(key) is present we find the max. subarray length.
				ans = max(ans,i-m[sum]);
			}
			else
			{
				m.insert({sum,i});
			}
		}
	}
	cout<<endl;
	cout<<ans<<endl;
	
}



int32_t main() 
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
