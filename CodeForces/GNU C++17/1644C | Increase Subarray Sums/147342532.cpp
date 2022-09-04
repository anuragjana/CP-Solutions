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
// #define pb              push_back
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
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    int t;
    cin>>t;
    while(t--)
    {  
        int n,x;
        cin>>n>>x;
        vector<ll> v(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        int dp[n+1][n+1];
        for(int i =0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                dp[i][j] = 0;
            }
        }
        for(int i= 0;i<=n;i++)
        {
            dp[0][i]=0;
        }
        for(int i=1 ;i<=n;i++)
        {
            dp[i][0] = max(dp[i-1][0] + v[i],v[i]);
        }
 
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                int ans1 = v[i] + dp[i-1][j];
                int ans4 = INT_MIN;
                int ans2 = INT_MIN;
                if(j<=n)
                    ans2 = v[i] + x + dp[i-1][j-1];
                int ans3 = v[i];
                if(j<=n)
                    ans4 = v[i] + x;
                dp[i][j] = max(max(ans1,ans2),max(ans3,ans4));
            }
        }
        for(int i = 0;i<=n;i++)
        {
            int ans = 0;
            for(int j=0;j<=n;j++)
            {
                ans = max(ans,dp[j][i]);
            }
            cout<<ans<<" ";
        }
        cout<<endl;
 
 
 
    }
    return 0;
}