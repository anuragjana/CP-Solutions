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
#define pb              push_back
#define endl            '\n'
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define f(i,a,b)        for(int i=a;i<b;i++)
#define M               1000000007
#define pb              push_back
#define precise(n)      fixed << setprecision(n)<< 
 
int n,k,d;
int dp[101][2];
int numberofPaths(int weight,int totalDepth,int d,int check)
{
    if(weight<0)
    {
        return 0;
    }
        if(weight== 0 )
        {
            if(check==1)
                return 1;
            else 
                return 0;
        }
 
 
        if(dp[weight][check]!=-1)
            return dp[weight][check];
 
    int ans = 0;
    for(int i=1;i<=totalDepth;i++)
    {
        if(i>=d)
        {
            int b = 1;
            ans=(ans+numberofPaths(weight-i,totalDepth,d,b))%M;
        }
        else
            ans=(ans+numberofPaths(weight-i,totalDepth,d,check))%M;
    }
    dp[weight][check] = ans;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    memset(dp,-1,sizeof(dp));
    cin>>n>>k>>d;
    int check = 0;
    cout<<numberofPaths(n,k,d,check);
 
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
// #define pb              push_back
// #define endl            '\n'
// #define mii             map<int,int>
// #define pqb             priority_queue<int>
// #define pqs             priority_queue<int,vi,greater<int> >
// #define mk(arr,n,type)  type *arr=new type[n];
// #define w(x)            int x; cin>>x; while(x--)
// #define f(i,a,b)        for(int i=a;i<b;i++)
// #define M               1000000007
// #define pb              push_back
// #define precise(n)      fixed << setprecision(n)<< 
 
// int main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     // w(t)
//     // {
//     ll r,g,b;
//     cin>>r>>g>>b;
//     ll ans = min(r,min(g,b));
//     // cout<<ans<<endl;
//     r-=ans;
//     b-=ans;
//     g-=ans;
//     // cout<<r<<g<<b<<endl
 
//     ll x,y;
//     x = max(max(r,g),b);
//     y = r + b + g - x- min(min(r,g),b);
//     // cout<<"x"<<x<<"y"<<y<<endl;
 
//     while(x>=3 && y>=3)
//     {
//         ans+=2;
//         x-=3;
//         y-=3;
//         // cout<<"x"<<x<<"y"<<y<<endl;
//     }
//     int maximum = max(x,y);
//     int minimum = min(x,y);
//     // cout<<"maximum"<<maximum<<endl;
//     // cout<<"min"<<minimum<<endl;
//     if(minimum ==1)
//     {
//         if(maximum>=2)
//         {
//             ans++;
//             // cout<<ans<<endl;
//         }
//     }
//     if(minimum==2)
//     {
//         if(maximum>=4)
//         {
//             ans+=2;
//             // cout<<ans<<" "<<1<<endl;
//         }
//         else if(maximum>=1){
//             ans++;
//             // cout<<ans<<" "<<2<<endl;
//         }
//     }
//     cout<<ans<<endl;
// // }
//     return 0;
// }
 