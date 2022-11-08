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
//bfs is iterative while dfs is recursive
void print(vector<vi> v , int sv)
{
	int n = v.size();
	int visited[n] = {0};
	queue<int> q;
	q.push(sv);
	visited[sv] = 1;
	while(!q.empty())
	{
		int cv = q.front();
		q.pop();
		cout<<cv<<endl;
		for(int i =0;i<n;i++)
		{
			if(v[cv][i]==1 and visited[i]==0)
			{
				q.push(i);
				visited[i] = 1;
			}
		}
	}
	
}
void solve()
{
	 int n,e;
	 cin>>n>>e;
	 vector<vi> matrix(n,vi(n));
	 for(int i =0;i<e;i++)
	 {
	 	int fv,sv;
	 	cin>>fv>>sv;
	 	matrix[fv][sv] = matrix[sv][fv] = 1;
	 }
	 print(matrix,0);
}
int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
