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

void print(vector<vi> v,int sv,int visited[])
{
	cout<<sv<<endl;
	visited[sv] = 1;
	int n = v.size();
	for(int i=0;i<n;i++)
	{
		if(v[sv][i]==1 and visited[i]==0)
		{
			print(v,i,visited);
		}
	}
	
	
}
void dfs(vector<vi> v)
{
	int n = v.size(),ct =0;
	int visited[n] = {0};
	for(int i =0;i<n;i++)
	{
		if(visited[i]==0)
		{
			ct++;
			print(v,i,visited);
		}
	}
	cout<<"The number of connected components is "<<ct<<endl;

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
	 dfs(matrix);
}
int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
