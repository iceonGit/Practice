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
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	vector<vector<int>>v;
	for(int i =0;i<n-3;i++)
	{
		for(int j = i+1;j<n-2;j++)
		{
			int sum = x-a[i]-a[j];
			int l = j+1,r = n-1;

			while(r>l)
			{
				if(a[l]+a[r]==sum)
				{
					v.pb({a[i],a[j],a[l],a[r]});
					l++,r--;
					while (l < r && a[l] == a[l+1]) l++;
                    while (l < r && a[r] == a[r-1]) r--;
				}
				else if(a[l]+a[r]<sum)
				{
					l++;
				}
				else
				{
					r--;
				}
				while(j<n-1 and a[j]==a[j+1])j++;
			}
			while(i<n-1 and a[i]==a[i+1])i++;
		}
	}
	for(auto &it:v)
	{
		for(auto &i:it)
		{
			cout<<i<<" ";
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
