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
	char str[n];
	cin>>str;
	int a = 1, b = 1, k=0,ans = 0;
	for(int i = 1;i<n and k<n;i++)
	{
		if(str[k]!=str[i] and str[i]!=str[i-1])
		{
			a++;
		}
		else
		{
			k++;
			b = max(a,b);
			// cout<<b<<endl;
			a = 1;
			ans = max(ans,b);
		}
		ans = max(ans,a);
		
	}
	cout<<ans<<endl;

}



int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
