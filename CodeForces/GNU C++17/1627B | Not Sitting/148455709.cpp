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
    w(t)
    {
        int m,n;
        cin>>m>>n;
        vector<int>  ans;
        for(int i = 1; i<=m;i++){
            for(int j=1 ; j <= n ;j++)
            {
                int a = abs(i-1) + abs(j-1);
                int b = abs(i-1) + abs(j-n);
                int c = abs(i-m) + abs(j-1);
                int d = abs(i-m) + abs(j-n);
                int ans1 = max(max(a,b),max(c,d));
                ans.pb(ans1);
            }
        } 
        sort(ans.begin(), ans.end());
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
 