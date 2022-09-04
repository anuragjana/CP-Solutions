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
 
 
int main()
{
 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a,b,p,q;
    cin>>a>>b>>p>>q;
    vector<pair<int,int>> ans;
    for(int i=p;i<=a;i++){
        for(int j=q;(j<=b && j<i);j++){
            if(i>j)
            {
                ans.push_back(make_pair(i,j));
            }
 
        }
    }
 
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
 
 
}
 