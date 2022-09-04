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
 
 
class SegTree{
 public:
 
 vector<int> seg;
 SegTree(int n){
  seg.resize(4*n+1);
 
 }
 void build(int idx,int low,int high,vector<int> &arr,int k)
 {
  if(low==high)
  {
   seg[idx] = arr[low];
   return;
  }
 
  int mid = (low+high)/2;
  build(2*idx+1,low,mid,arr,k-1);
  build(2*idx+2,mid+1,high,arr,k-1);
  if(k&1)
  {
   seg[idx] = (seg[2*idx+1]|seg[2*idx+2]);
  }
  else
  {
   seg[idx] = (seg[2*idx+1]^seg[2*idx+2]);
  }
 }
 
 
 int query(int idx,int low,int high,int l,int r,int k){
  //no overlap
  // l r low high or low high lr
  if(r<low || high<l)
   return 0;
 
  //complete overlap
  // [l low high r]
  if(low>=l && high<=r)
  {
   return seg[idx];
  }
 
  //partial overlap
  int mid = (low+high)/2;
  int left = query(2*idx+1,low,mid,l,r,k-1);
  int right = query(2*idx+2,mid+1,high,l,r,k-1);
  if(k&1)
  {
   return (left | right);
 
  }
  else
  {
   return (left^right);
  }
 }
 
 void update(int idx,int low,int high,int i,int val,int k)
 {
  if(low==high)
  {
   seg[idx] = val;
   return;
  }
  int mid = (low+high)>>1;
  if(i<=mid)
  {
   update(2*idx+1,low,mid,i,val,k-1);
  }
  else
  {
   update(2*idx+2,mid+1,high,i,val,k-1);
  }
  if(k&1)
  {
   seg[idx] = seg[2*idx+1]|seg[2*idx+2];
  }
  else
  {
   seg[idx] = seg[2*idx+1]^seg[2*idx+2];
  }
 }
};
 
 
void solve()
{
 ll n,x;
 cin>>n>>x;
 vector<ll> arr(n);
 f(i,0,n-1)
 {
  cin>>arr[i];
 }
 
 ll currmn =arr[0];
 ll currmx =arr[0];
 ll cnt = 0;
 for(ll i=1;i<n;i++)
 {
  currmx = max(currmx,arr[i]);
  currmn = min(currmn,arr[i]);
  if(abs(currmn-currmx)>2*x)
  {
   currmx = arr[i];
   currmn = arr[i];
   cnt++;
  }
 }
 
 cout<<cnt<<endl;
 
}
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("Error.txt","w",stderr);
    #endif    
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        // cout<<"Case #"<<i+1<<": ";
        solve();    
        // cout<<"\n";
    }
 
 
 
 
    return 0;
}
 