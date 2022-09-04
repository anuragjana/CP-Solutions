 
 
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
// #define M              1000000007
#define pb              push_back
#define precise(n)      fixed << setprecision(n)<< 
#define    M 18
 
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t)
    {
        int n,k;
        cin>>n>>k;
        pair<int,int> * arr = new pair<int,int>[n]; 
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].first;
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].second;
        }
 
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i].first <= k)
            {
                k+=arr[i].second;
            }
            else
                break;
        }
        cout<<k<<endl;
 
    }
    return 0;
    
}