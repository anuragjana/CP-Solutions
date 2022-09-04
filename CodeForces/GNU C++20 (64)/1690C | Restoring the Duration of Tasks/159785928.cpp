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
#define mk(arr,n)       vll arr(n); f(i,0,n-1) cin>>arr[i];
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
const ll mod=998244353;
// const ll mod=1e9+7;
 
//Check
bool isPrime(ll n){if(n==1)return true;if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
 
// Mathematical functions
 
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
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
ll mod_add(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
ll mod_div(ll a, ll b, ll m)
{
    a = a % m;
    b = b % m;
    return (mod_mul(a, mminvprime(b, m), m) + m) % m;
} //only for prime m
 
ll highestPowerof2(ll n){ ll p = (ll)log2(n); return (ll)pow(2, p);}
  
//Sorting
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
 
 
void solve()
{
    ll n;
    cin>>n;
    vll s(n);
    vll fi(n);
    f(i,0,n-1)
        cin>>s[i];
    f(i,0,n-1)
        cin>>fi[i];
    vll d(n);
    d[0] = fi[0]-s[0];
    ll maxprev = fi[0];
    f(i,1,n-1)
    {
        if(s[i]>maxprev)
        {
            d[i] = fi[i]-s[i];
            maxprev = fi[i];
        }
        else
        {
            d[i] = fi[i]-(maxprev);
            maxprev = fi[i];
        }
    }
    f(i,0,n-1)
        cout<<d[i]<<" ";
    cout<<endl;
 
 
}  
 
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("Error.txt","w",stderr);
    #endif    
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   
 
    int t;
    cin>>t;
    for(int i =0;i<t;i++) 
    {
        // debug(i+1)
        // cout<<"Case #"<<i+1<<": "<<endl;
        solve();
        // cout<<"\n";
    }
    return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
// #include <bits/stdc++.h>
// #include<iostream>
// #include<climits>
// #include<string>
// using namespace std;
 
// // Macros 
// #define vi              vector<int>
// #define vll             vector<ll>
// #define pll             pair<ll, ll>
// #define pii             pair<int, int>
// #define ld              long double 
// #define ll              long long 
// #define ff              first
// #define ss              second
// #define vs              vector<string>
// #define vpll            vector<pll>
// #define vb              vector<bool>
// #define mll             map<ll,ll> 
// #define mii             map<int,int>
// #define endl            '\n'
// #define pqb             priority_queue<int>
// #define pqs             priority_queue<int,vi,greater<int> >
// #define mk(arr,n)       vll arr(n); f(i,0,n-1) cin>>arr[i];
// #define w(x)            int x; cin>>x; while(x--)
// #define f(i,a,b)        for(int i=a;i<=b;i++)
// #define fb(i,a,b)       for(int i=a;i>=b;i--)
// #define mp              make_pair
// #define pb              push_back
// #define precise(n)      fixed << setprecision(n)<< 
// #define py              cout<<"YES"<<endl;
// #define pn              cout<<"NO"<<endl;
// #define pm              cout<<"-1"<<endl;
// #define all(arr)        arr.begin(), arr.end()
 
 
// #ifndef ONLINE_JUDGE
// #define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif
 
// void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(ld t) {cerr << t;}
// void _print(double t) {cerr << t;}
 
// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
 
 
// //Constants
// const ld pi= 3.141592653589793238;
// const ll INF= LONG_LONG_MAX;
// const ll mod=998244353;
// // const ll mod=1e9+7;
 
// //Check
// bool isPrime(ll n){if(n==1)return true;if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
// bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
// bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
 
// // Mathematical functions
 
// ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
// ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
// ll expo(ll a, ll b, ll mod)
// {
//     ll res = 1;
//     while (b > 0)
//     {
//         if (b & 1)
//             res = (res * a) % mod;
//         a = (a * a) % mod;
//         b = b >> 1;
//     }
//     return res;
// }
// ll mminvprime(ll a, ll b) { return expo(a, b - 2, b); }
// ll mod_add(ll a, ll b, ll m)
// {
//     a = a % m;
//     b = b % m;
//     return (((a + b) % m) + m) % m;
// }
// ll mod_mul(ll a, ll b, ll m)
// {
//     a = a % m;
//     b = b % m;
//     return (((a * b) % m) + m) % m;
// }
// ll mod_sub(ll a, ll b, ll m)
// {
//     a = a % m;
//     b = b % m;
//     return (((a - b) % m) + m) % m;
// }
// ll mod_div(ll a, ll b, ll m)
// {
//     a = a % m;
//     b = b % m;
//     return (mod_mul(a, mminvprime(b, m), m) + m) % m;
// } //only for prime m
 
// ll highestPowerof2(ll n){ ll p = (ll)log2(n); return (ll)pow(2, p);}
  
// //Sorting
// bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
// bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}
 
 
// void solve()
// {
//     int n;
//     cin>>n;
//     vll a(n);
//     f(i,0,n-1)
//         cin>>a[i];
//     vll b(n);
//     f(i,0,n-1)
//         cin>>b[i];
//     vll diff;
//     for(int i=0;i<n;i++)
//     {
//         if(b[i]>a[i])
//         {
//             cout<<"NO"<<endl;
//             return;
//         }
//     } 
//     ll zerodiffmax =INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         if(b[i]==0)
//         {
//             debug(a[i]-b[i])
//             zerodiffmax = max(zerodiffmax,a[i]-b[i]);
//             continue;
//         }
//         ll x= a[i]-b[i];
//         diff.push_back(x);
//     }
 
//     sort(all(diff));
//     int m = diff.size()-1;
 
//     debug(diff);
//     debug(zerodiffmax)
//     if(diff.size()==0)
//     {
//         debug(1)
//         cout<<"YES"<<endl;
//         return;
//     }
//     if(diff.size()==1)
//     {
//         if(zerodiffmax>diff[0])
//         {
//             debug(2)
//             cout<<"NO"<<endl;
//             return;
//         }
//         else
//         {
//             debug(3)
//             cout<<"YES"<<endl;
//             return;
//         }
//     }
//     // debug(zerodiffmax)
//     if(zerodiffmax>diff[m])
//     {
//             debug(4)
 
//         cout<<"NO"<<endl;
//         return;
//     }
 
//     if(diff[0]!=diff[m-1])
//     {
//             debug(5)
 
//         cout<<"NO"<<endl;
//     }
//     else
//     {
//             debug(6)
 
//         cout<<"YES"<<endl;
//     }
 
// }  
 
 
// int main()
// {
//     #ifndef ONLINE_JUDGE
//         freopen("Error.txt","w",stderr);
//     #endif    
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   
 
//     int t;
//     cin>>t;
//     for(int i =0;i<t;i++) 
//     {
//         // debug(i+1)
//         // cout<<"Case #"<<i+1<<": "<<endl;
//         solve();
//         // cout<<"\n";
//     }
//     return 0;
// }
 
 
 
 
 
 
 
 
 
 
 
 