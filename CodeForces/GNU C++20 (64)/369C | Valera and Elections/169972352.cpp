#include <bits/stdc++.h>
#include<iostream>
#include<climits>
#include<string>
using namespace std;
 
// Macros 
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
#define mll             map<ll,ll> 
#define mii             map<int,int>
#define endl            '\n'
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define f(i,a,b)        for(int i=a;i<=b;i++)
#define fb(i,a,b)       for(int i=a;i>=b;i--)
#define mp              make_pair
#define pb              push_back
#define precise(n)      fixed << setprecision(n)<< 
#define py              cout<<"YES"<<endl;
#define pn              cout<<"NO"<<endl;
#define pm              cout<<"-1"<<endl;
#define all(arr)        arr.begin(), arr.end()
#define ain(a,n) for(ll i=0;i<n;i++)cin>>(a)[i]
#define show(a) for(auto x:a)cout<<x<<" ";
 
 
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
 
 
//Constants
const ld pi= 3.141592653589793238;
// const ll INF= LONG_LONG_MAX;
const ll mod=1e9+7;
 
//Check
bool isPrime(ll n){if(n==1)return true;if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
 
// Mathematical functions
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll moduloAddition(ll a,ll b,ll mod){ll res = 0;res = ((a%mod)+(b%mod))%mod; return res;} 
ll moduloSubtraction(ll a,ll b,ll mod){ll res = 0;res = ((a%mod)-(b%mod)+mod)%mod; return res;} 
 
//Sorting
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
//Custom
bool compare(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
 
 return ((a.first-a.second)>(b.first-b.second));
}
 
 
 
 
ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
 
 
ll expo(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
ll mminvprime(ll a, ll b) { return expo(a, b - 2, b); }
 
ll mod_div(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
}
 
/********************Template ends here :3 *****************************************/
 
vector<vector<pair<ll,ll>>> adj;
vector<vector<ll>> arr; 
set<ll> ans;
 
 
bool dfs(ll node,ll par,ll currbad)
{
 //if currbad 0 node has badroad above it
 //if badroad present below this one
 bool check = false;
 for(auto child : adj[node])
 {
  if(child.first==par)
   continue;
  if(child.second==2)
  {
   bool check2 = dfs(child.first,node,0ll);
   check = true;
  }
  else
  {
   bool check2 = dfs(child.first,node,1ll);
   check = check or check2;
  }
 }
 
 if(currbad==0 && check==false)
 {
  ans.insert(node);
 }
 
 return check;
}
 
 
void solve()
{
 ll n;
 cin>>n;
 adj.assign(n+1,{});
 ans.clear();
 bool badroad=true;
 f(i,1,n-1)
 {
  ll x,y,z;
  cin>>x>>y>>z;
  if(z==2)
   badroad=false;
  adj[x].push_back({y,z});
  adj[y].push_back({x,z});
 }
 if(badroad)
 {
  cout<<0<<endl;
  return;
 }
 bool check = dfs(1ll,-1ll,0ll);
 cout<<ans.size()<<endl;
 for(auto it:ans)
 {
  cout<<it<<" ";
 }
 cout<<endl;
}
 
 
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("Error.txt","w",stderr);
    #endif    
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    // int t;
    // cin>>t;
    // for(int i=0;i<t;i++)
    // {
        // cout<<"Case #"<<i+1<<": ";
        solve();    
        // cout<<"\n";
    // }
    return 0;
}