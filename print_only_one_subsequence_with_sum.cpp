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

bool print(int i , vi &ds,int s, int sum, int a[],int n)
{
    if(i==n)
    {
        if(s==sum)
        {
            for(auto it:ds)
            {
                cout<<it<<" ";
            }
            cout<<endl;
            //condition satisfied
            return true;
        }
        //condition not satisfied
        else
        {
            return false;
        }
        
    }
    //taking the element
    ds.pb(a[i]);
    s+=a[i];
    if(print(i+1,ds,s,sum,a,n)==true)return true;
    s-=a[i];
    ds.pop_back();

    //not taking the element
    if(print(i+1,ds,s,sum,a,n)==true)return true;

    return false;
}

void solve()
{
    int n,sum=3;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }	
    vi ds;
    print(0,ds,0,sum,a,n);
}


int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
