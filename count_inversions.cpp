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
int merge (int a[],int temp[],int left,int mid,int right)
{
	int i=left,j=mid,k=left;
	int inv_count = 0;

	while(i<=mid-1 and j<=right)
	{
		if(a[i]<a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;

			inv_count = inv_count + (mid-i);
		}
	}
	while(i<=mid-1)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
	while(j<=right)
	{
		temp[k] = a[j];
		k++;
		j++;
	}

	for(int i = left;i<=right;i++)
	{
		a[i] = temp[i];
	}

	return inv_count;

}
int split(int a[],int temp[],int left,int right)
{
	int mid ,inv_count = 0;
	if(right>left)
	{
		mid = (right+left)/2;

		inv_count += split(a,temp,left,mid);//left part
		inv_count += split(a,temp,mid+1,right);//right part

		inv_count += merge(a,temp,left,mid+1,right);//merging the array
	}
	return inv_count;
}

void solve()
{
	int n;
	cin>>n;
	int a[n],temp[n];
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	int k = split(a,temp,0,n-1);
	cout<<k<<endl;
}

int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
