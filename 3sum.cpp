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
	int a[n];
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	vector<vector<int>>v;
	for(int i =0;i<n-2;i++)
	{
		int k = n-1;
		for(int j = i+1;j<k;j++)
		{
			while(a[i]+a[j]+a[k]>0)
			{
				k--;
			}
			if(j<k and a[i]+a[j]+a[k]==0)
			{
				vector<int>b = {a[i],a[j],a[k]};
				if(count(all(v),b)>0)
				{
					continue;
				}
				else
				{
					v.pb(b);
				}
				

			}
		}
	}
	for(auto &it:v)
	{
		for(auto &el:it)
		{
			cout<<el<<" ";
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
