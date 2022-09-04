 
#include <bits/stdc++.h>
#include<iostream>
#include<climits>
#include<string>
using namespace std;
 
#define vi              vector<int>
#define vll             vector<ll>
#define pll             pair<ll, ll>
#define pii             pair<int, int>
#define ld              long double 
#define ll              long long 
#define ff              first
#define ss              second
#define vs              vector<string>
#define vpll            vector<pll>
#define vb              vector<bool>
#define mp              make_pair
#define endl            '\n'
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define f(i,a,b)        for(int i=a;i<=b;i++)
#define fb(i,a,b)       for(int i=a;i>=b;i--)
#define M              1000000007
#define pb              push_back
#define precise(n)      fixed << setprecision(n)<< 
 
void solve()
{
    int n;
    cin>>n;
 
    vector<ld> arr(n);
    map<ld,ld> mp;
    ld avg = 0;
    f(i,0,n-1)
    {
        cin>>arr[i];
        // mp[arr[i]].pb(i+1);
        mp[arr[i]]++;
        avg+=arr[i];
    }
    sort(arr.begin(), arr.end());
    avg = avg/n;
    ll count = 0;
    for(ld i=0;arr[i]<avg;i++)
    {
        count+=mp[2*avg-arr[i]];
    }
    count+=mp[avg]*(mp[avg]-1)/2; 
    cout<<count<<endl;
 
 
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t)
    {
        solve();
    }
    return 0;
}