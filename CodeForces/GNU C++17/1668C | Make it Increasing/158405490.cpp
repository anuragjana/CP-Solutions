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
#define mk(arr,n)       ll n; cin>>n; vll arr(n); f(i,0,n-1) cin>>arr[i];
#define w(x)            int x; cin>>x; while(x--)
#define f(i,a,b)        for(int i=a;i<=b;i++)
#define fb(i,a,b)       for(int i=a;i>=b;i--)
// #define mp              make_pair
#define pb              push_back
#define precise(n)      fixed << setprecision(n)<< 
#define py              cout<<"YES"<<endl;
#define pn              cout<<"NO"<<endl;
#define pm              cout<<"-1"<<endl;
#define all(arr)        arr.begin(), arr.end()
 
 
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
const ll INF= LONG_LONG_MAX;
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
ll highestPowerof2(ll n){ ll p = (ll)log2(n); return (ll)pow(2, p);}
  
//Sorting
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
 
void solve()
{
    ll n;
    cin>>n;
    vll a(n);
    f(i,0,n-1)
        cin>>a[i];
    vll b(n,0);
    ll ans = INF;
    for(int i=0;i<n;i++)
    {
        debug(i)
        b[i]=0;
        ll subans = 0;
        ll last = 0;
        for(int j=i+1;j<n;j++)
        {
            // if(last%a[j]==0){
                subans += (last/a[j]+1);
            // }
                last =(last/a[j]+1)*a[j];
            // subans += ceil((float)last/(float)a[j]);
            // last = (ceil((float)last/(float)a[j]))*a[j];
            b[j]=last;
            // if(last%a[j]==0)
            // {
            //     subans+=
            // }
 
        }
        last = 0;
        for(int j=i-1;j>=0;j--)
        {
            subans += last/a[j]+1;
            last = (last/a[j]+1)*a[j];
            b[j]=last;
        }
 
        debug(b)
 
        ans = min(ans,subans);
        debug(ans);
    }
    cout<<ans<<endl;
}  
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("Error.txt","w",stderr);
    #endif    
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
 
    // int t;
    // cin>>t;
    // for(int i =0;i<t;i++) 
    // {
        // cout<<"Case #"<<i+1<<": ";
        solve();
        // cout<<"\n";
    // }
    return 0;
}