// #include <bits/stdc++.h>
// #include<iostream>
// #include<climits>
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
// #define M               998244353
// #define pb              push_back
 
 
// bool check(ll * arr,ll n,ll h,ll k)
// {
//     ll score = 0;
//     for(int i=0;i<n-1;i++)
//     {
//         if((arr[i+1]-arr[i])>=k)
//             score+=k;
//         else
//             score += (arr[i+1]-arr[i]);
 
//     }
 
//     score+=k;
//     return (score>=h);
 
// }
 
 
// ll min_k(ll * arr,ll n,ll h){
 
//     ll start = 0;
//     ll end = LONG_MAX;
//     // ll ans = LONG_MAX ;
//     while(start<end){
//         ll mid =(end + start)/2;
//         bool a =check(arr,n,h,mid);
//         // cout<<mid<<" "<<a<<endl; 
//         if(a==true)
//         {
//             // ans = mid;
//             end = mid;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
//     return end;
// }
 
 
// int main()
// {
 
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     w(t){
//         ll n,h;
//         cin>>n>>h;
//         mk(arr,n,ll);
//         for(ll i=0;i<n;i++)
//         {
//             cin>>arr[i];
//         }
//         ll ans = min_k(arr,n,h);
//         cout<<ans<<endl;
//         delete[] arr;
        
//     }
//     return 0;
// }
 
 
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
#define M               998244353
#define pb              push_back
 
 
bool check(ll * arr,ll n,ll h,ll k)
{
    ll score = 0;
    for(int i=0;i<n-1;i++)
    {
            score += min(k,arr[i+1]-arr[i]);
 
    }
 
    score+=k;
    return (score>=h);
 
}
 
 
ll min_k(ll * arr,ll n,ll h){
 
    ll start =1;
    ll end = pow(10,18);
    ll ans = end;
    while(start<=end){
        ll mid = (end +start)/2;
        bool a =check(arr,n,h,mid);
        // cout<<mid<<" "<<a<<endl; 
        if(a==true)
        {
            ans = min(ans,mid);
            end = mid-1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
 
int main()
{
 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t){
        ll n,h;
        cin>>n>>h;
        mk(arr,n,ll);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
 
        ll ans = min_k(arr,n,h);
        cout<<ans<<endl;
        delete[] arr;
        
    }
    return 0;
}
 
 
 