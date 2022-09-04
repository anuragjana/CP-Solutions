#include <bits/stdc++.h>
#include<iostream>
#include<climits>
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
 
int helper(int a,int b)
{
    if((a< 1 )|| (b<1))
        return 0;
    int ans = 0;
    if(a>=1 && b>=3)
        ans = max(helper(a-1,b-3),ans);
    if(a>=2 && b>=2)
        ans = max(helper(a-2,b-2),ans);
    if(a>=3 && b>=1)
        ans = max(helper(a-3,b-1),ans);
    if(ans==0)
        return 0;
    else return 1+ans;
 
}
int main()
{
 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t){
        ll a,b;
        cin>>a>>b;
        ll small = min(a,b);
        ll big= max(a,b);
        ll c = min(small,((big-small)/2));
        small = small - c;
        big = big - 3*c;
        c +=(small/2);
        cout<<c<<endl;
        // // cout<<helper(a,b)<<endl;
        // if(big>=3*small && small>=1)
        // {
        //     cout<<small<<endl;
        //     continue;
        // }
        // else if(big>=small && small>=1){
        //     ll ans = small/2;
        //     big = big - (ans*2);
        //     small = small -(ans*2);
        //     if(small==1 && big>=3)
        //         ans++;
 
        //     cout<<ans<<endl;
        //     continue;
        // }
        // else                              
        // {
        //     cout<<0<<endl;
        // } ++
        // // int count = 0;
        // // while(a>=1 && b>=1)
        
 
 
 
    }
    return 0;
}
 