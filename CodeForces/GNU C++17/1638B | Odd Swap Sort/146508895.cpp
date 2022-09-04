 
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
#define M              1000000007
#define pb              push_back
#define precise(n)      fixed << setprecision(n)<< 
// #define    M 18
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> arr(n);
        vector<ll> odd,even;
 
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                odd.pb(arr[i]);
            }
            else
            {
                even.pb(arr[i]);
 
            }
        }
        bool check = true;
 
        for(int i=1;i<odd.size();i++){
            if(odd[i-1]>odd[i]){
                check = false;
                break;
            }
        }
 
 
        for(int i=1;i<even.size();i++){
            if(even[i-1]>even[i]){
                check = false;
                break;
            }
        }
        if(check == true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
 
    }
 
 
    return 0;
    
}