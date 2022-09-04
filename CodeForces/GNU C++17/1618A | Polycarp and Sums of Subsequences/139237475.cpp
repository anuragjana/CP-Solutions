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
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t)
    {
        // vector<ll> arr;
 
        ll arr[7];
        for(int i=0;i<7;i++){
            ll x;
            // cin>>x;
            cin>>arr[i];
            // arr.push_back(x);
        }
        // sort(arr.begin(),arr.end());
        sort(arr,arr+7);
        ll small = arr[0];
        ll mid = arr[1];
        ll big = arr[6]- small - mid;
        // ll big = arr[] - arr[0];
        // ll mid = arr[arr.size()-2]-big;
 
        cout<<small<<" "<<big<<" "<<mid<<endl; 
 
    }
    return 0;
}