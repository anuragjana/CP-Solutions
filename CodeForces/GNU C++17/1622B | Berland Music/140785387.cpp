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
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t)
    {
        ll n ;
        cin>>n;
        vector <ll> inp;
        for(ll i =0 ;i<n;i++)
        {
            ll x;
            cin>>x;
            inp.pb(x);
        }
        string s;
        cin>>s;
        vector <ll> like;
        vector <ll> dislike;
        ll dislikecount=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                dislike.pb(inp[i]);
                dislikecount++;
            }
            else
            {
                like.pb(inp[i]);
 
            }
        }
 
        sort(dislike.begin(),dislike.end());
        sort(like.begin(),like.end());
        unordered_map<ll,ll> mp;
        for(ll i = 0 ;i<like.size();i++){
            mp[like[i]] = dislikecount + i+1;
        }
        for(ll i = 0 ;i<dislike.size();i++){
            mp[dislike[i]] =  i+1;
        }
 
        for(ll i=0;i<n;i++)
        {
            cout<<mp[inp[i]]<<" ";
        }
        cout<<endl;
 
 
    }
    return 0;
    
}
 
 