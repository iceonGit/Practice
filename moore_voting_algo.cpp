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
	int nums[n];
	for(int i = 0;i<n;i++)
	{
		cin>>nums[i];
	}
	int count = 0,element = 0;
	for(int num:nums)
	{
		if(count == 0)
		{
			element = num;
		}
		if(num==element)
		{
			count++;
		}
		else
		{
			count--;
		}
	}
	cout<<element<<endl;
}

int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}

//Intuition
//When the elements are the same as the candidate element, 
// votes are incremented whereas when some other element is found (not equal to the candidate element),
// we decreased the count. 
// This actually means that we are decreasing the priority of winning ability of the selected candidate, 
// since we know that if the candidate is in majority it occurs more than N/2 times
// and the remaining elements are less than N/2. We keep decreasing the votes
// since we found some different element(s) than the candidate element.
// When votes become 0,
// this actually means that there are the equal  number of votes for different elements,
// which should not be the case for the element to be the majority element.
// So the candidate element cannot be the majority and 
// hence we choose the present element as the candidate and 
// continue the same till all the elements get finished. 
// The final candidate would be our majority element. 
// We check using the 2nd traversal to see whether its count is greater than N/2. 
// If it is true, we consider it as the majority element.
