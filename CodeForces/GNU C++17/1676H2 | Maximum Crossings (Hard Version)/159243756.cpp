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
 
    long long merge(vector<ll> &arr , int left , int mid , int right , ll temp[]){
        // here mid = mid + 1(we passed mid + 1 when we were calling merge function)
        int i = left , j = mid , k = left;
        long long inv = 0 ;
        
        // counting number of inversions alag se while doing merge
        //because we were not able to merge the elements in sorted 
        //oreder with the given condition arr[i] > 2*arr[j] unlike the counting inversion question
        //on geeks in which the conditon was arr[i] > arr[j]. and we were able to merge and count inversions simoultaniously(EK SATH)
        
        while(i < mid && j <=right ){
            if((long long)arr[i] >=(long long)arr[j]){
                inv += mid - i;
                j++;
            }
            else 
                i++;
        }
        
        i = left ; j = mid;
        
        // merging and storing in temp array
        while(i < mid && j <= right){
            if(arr[i] <= arr[j])
                temp[k++] = arr[i++];
            else
                temp[k++] = arr[j++];
        }
        
        while(i < mid)
            temp[k++] = arr[i++];
        
        while(j <= right)
            temp[k++] = arr[j++];
        
        //storing in the main array(NUMS array) 
        for(; left <= right ; left++)
            arr[left] = temp[left];
        
        return inv;
    }
    
   ll solve(vector<ll> &arr , int left , int right ,ll temp[]){
        if(left == right)
            return 0;
        
       long long inv  = 0;
        int mid = left + (right - left)/2;
        
        inv+=solve(arr , left , mid , temp);        // left part inversion count 
        inv+=solve(arr , mid + 1 , right , temp);   // right part inversion count
        inv+=merge(arr , left , mid + 1 , right , temp);    
        
        return inv;
    }
 
long long reversePairs(vector<ll>& nums)
{
    int n = nums.size();
   if(n == 0 )
        return 0;
    
    ll temp[n];
   
    return solve(nums , 0 , n - 1 , temp);
    
    // if we print the nums array after calling the solve function then our nums array will be sorted as we are using merge sort to find the inversion count (in this case the condition is nums[i] > 2*nums[j])
    
}
 
void solve()
{
    ll n;
    cin>>n;
    vll arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<reversePairs(arr)<<endl;
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
        // cout<<"Case #"<<i+1<<": "<<endl;
        solve();
        // cout<<"\n";
    }
    return 0;
}
 
 
 
 