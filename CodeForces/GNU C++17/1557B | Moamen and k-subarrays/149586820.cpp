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
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    f(i,0,n-1)
    cin>>a[i];
    vector<ll> b=a;
    sort(b.begin(),b.end());
    ll cnt=1;
    map<ll,ll> m;
    f(i,0,n-1)
    m[a[i]]=i;
    ll i=0;
    set<ll> st;
    f(i,1,n-1)
    {
        if(m[b[i-1]]+1!=m[b[i]])
            cnt++;
      
 
    
        
 
    }
    // cout<<cnt<<endl;
    if(k>=cnt)
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        cout<<"NO"<<endl;
        return;
    }
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