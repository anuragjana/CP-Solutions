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
    vll arr(n);
    f(i,0,n-1)
    {
        cin>>arr[i];
    }
    vll minsofar(n);
    vll maxsofar(n);
    maxsofar[0] = arr[0];
    f(i,1,n-1)
    {
        maxsofar[i] = max(arr[i],maxsofar[i-1]);
    }
    minsofar[n-1]=arr[n-1];
    // for(int i=n-2;i>=0;i--)
    fb(i,n-2,0)
    {
        minsofar[i] = min(arr[i],minsofar[i+1]);
    }
    bool check = true;
    f(i,0,n-2)
    {
        if(maxsofar[i]>minsofar[i+1])
        {
            check = false;
            break;
        }
 
    }
    if(!check)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
 
 
 
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
 
 
// #include <bits/stdc++.h>
// #include<iostream>
// #include<climits>
// #include<string>
// using namespace std;
 
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
// #define mp              make_pair
// #define endl            '\n'
// #define mii             map<int,int>
// #define pqb             priority_queue<int>
// #define pqs             priority_queue<int,vi,greater<int> >
// #define mk(arr,n,type)  type *arr=new type[n];
// #define w(x)            int x; cin>>x; while(x--)
// #define f(i,a,b)        for(int i=a;i<b;i++)
// #define M              1000000007
// #define pb              push_back
// #define precise(n)      fixed << setprecision(n)<< 
 
// ll helper(ll idx, vector<ll> a, vector <ll> b,ll n,ll * dp)
// {
//     if(idx > n)
//         return 0;
//     if(dp[idx]!=-1)
//         return dp[idx];
//     ll ans1 = INT_MAX;
//     ll ans2 = INT_MAX;
//     if(idx<n)
//     {
//         for(int i = idx+1;i<=n;i++)
//         {
//             ans1 = min(ans1,abs(a[idx]-b[i]) + abs(a[i]-b[idx]) + helper(i+1,a,b,n,dp));
//             ans1 = min(ans1,abs(a[idx]-b[i]) + abs(a[i]-b[idx]) + helper(i,a,b,n,dp));
//         }
//     }
//     ans2 = abs(a[idx]-b[idx]) + helper(idx+1,a,b,n,dp);
//     return dp[idx] = min(ans1,ans2);
 
// }
// void solve()
// {
//     ll n;
//     cin>>n;
//     vector<ll> a(n+1);
//     vector<ll> b(n+1);
//     for(int i=1;i<=n;i++)
//     {
//         cin>>a[i];
//     }
 
//     for(int i=1;i<=n;i++)
//     {
//         cin>>b[i];
//     }
//     ll * dp = new ll[n+1];
//     for(int i=0;i<=n;i++)
//     {
//         dp[i]= -1;
//     }
//     ll answer = helper(1,a,b,n,dp);
//     cout<<answer<<endl;
//     delete [] dp;
// }
// int main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     w(t)
//     {
//         solve();
//     }
//     return 0;
// }