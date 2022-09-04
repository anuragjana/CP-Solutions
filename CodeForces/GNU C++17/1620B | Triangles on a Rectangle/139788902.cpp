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
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t)
    {
        ll w,h;
        cin>>w>>h;
        ll ans;
        ll down;
        cin>>down;
        ll x,y;
        cin>>x;
        for(ll i =2; i<down;i++)
        {
            ll random;
            cin>>random;
        }
        cin >> y;
        ans = (y-x)*h;
 
 
        cin>>down;
        cin>>x;
        for(ll i =2; i<down;i++)
        {
            ll random;
            cin>>random;
        }
        cin >> y;
        ans = max(ans,(y-x)*h);
 
 
        cin>>down;
        cin>>x;
        for(ll i =2; i<down;i++)
        {
            ll random;
            cin>>random;
        }
        cin >> y;
        ans = max(ans,(y-x)*w);
 
        cin>>down;
        cin>>x;
        for(ll i =2; i<down;i++)
        {
            ll random;
            cin>>random;
        }
        cin >> y;
        ans = max(ans,(y-x)*w);
 
        cout<<ans<<endl;
        
 
    }
    return 0;
}