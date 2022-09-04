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
#define f(i,a,b)        for(int i=a;i<b;i++)
#define M              1000000007
#define pb              push_back
#define precise(n)      fixed << setprecision(n)<< 
 
void solve()
{
    int n;
    cin>>n;
    // n = pow(2,n);
    // if(n%2==0)
    // {
    //     cout<<1<<endl;
    // }
ll x =pow(2,n)-1;
    cout<<fixed<<x<<endl;
    // vector<int> arr(n);
    // for(int i = 0;i<n;i++)
    // {
    //     arr[i] = i+1;
    // }
    // int j =1;
    // while(arr.size()>1)
    // {
    //     // cout<<"j : "<<j<<endl;
    //     vector<int> newarr;
    //     for(int i= 1;i<arr.size();i+=2 )
    //     {
    //         if((arr[i]+arr[i-1])%2==0)
    //         {
    //             // cout<<arr[i]<<" "<<arr[i-1]<<endl;
    //             // cout<<"winner"<<arr[i]<<endl;
    //             newarr.pb(arr[i]);
    //         }
    //         else{
    //             // cout<<arr[i]<<" "<<arr[i-1]<<endl;
    //             // cout<<"winner"<<arr[i]<<endl;
    //             newarr.pb(arr[i-1]);
    //         }
    //     }
 
    //     arr= newarr;
    // }
    // cout<<arr[0]<<endl;
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