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
#define f(i,a,b)        for(int i=a;i<b;i++)
#define M              1000000007
#define pb              push_back
#define precise(n)      fixed << setprecision(n)<< 
void solve()
{
    ll l,r,a;
    cin>>l>>r>>a;
    ll n1 = (r+1)/a;
    ll n;
    ll ans=0;
    if((a*n1-1)>=l)
    {
        n = n1;
        ll x = (n*a) -1;
        ans = (x/a) + x%a;
    }
    else
    {
        ll x = r;
        ans = (x/a) + x%a;
 
    }
    cout<<ans<<endl;
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
 