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

void mergeArrays(int x[],int y[],int a[],int s,int e){
       int mid = (s+e)/2;
       int i = s,j = mid+1,k = s;
       while(i<=mid && j<=e)
       {
           if(x[i] < y[j])
           {
                a[k] = x[i];
                i++;
                k++;
           }
           else
           {
                a[k] = y[j];
                j++;
                k++;
           }
       }
       while(i<=mid)
       {
            a[k] = x[i];
            k++;
            i++; 
       }
       while(j<=e)
       {
            a[k] = y[j];
            k++;
            j++;
       }
}

void mergeSort(int a[],int s,int e){
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;
    int x[e+1],y[e+1];

    for(int i=s;i<=mid;i++)
    { 
        x[i] = a[i];
    }
    for(int i=mid+1;i<=e;i++)
    {
        y[i] = a[i];
    }
    mergeSort(x,s,mid);
    mergeSort(y,mid+1,e);
    mergeArrays(x,y,a,s,e);
}
void solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	int s = 0, e = n-1;
	mergeSort(a,s,e);

	for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}


}

int32_t main()
{
 
	ios::sync_with_stdio(false);
 
	cin.tie(0);
	solve();
}
