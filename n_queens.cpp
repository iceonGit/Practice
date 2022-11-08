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

#define vvs vector<vector<string>>

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

bool isSafe(int row, int col, vector<string>&board,int n)
{
	while(col>=0)
	{
		if(board[])
	}
}
void nq(int col,vvs &board,vvs &ans, int n)
{
	if(col==n)
	{
		ans.pb(board);
		return;
	}
	for(int row = 0;row<n;row++)
	{
		if(isSafe(row,col,board,n))
		{
			board[row][col] = 'Q';
			nq(col+1,board,ans,n);
			board[row][col] = '.'
		}
	}


}
void solve()
{
	int n;
	cin>>n;
	vvs ans;
	vector<string> board(n);
	string s(n,'.');
	for(int i =0;i<n;i++)
	{
		board[i] = s;
	}
	nq(0,board,ans,n);	

}
int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
