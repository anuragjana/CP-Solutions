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
 
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    int t;
    cin>>t;
    while(t--)
    {  
        ll n,k;
        cin>>n>>k;
        if(k==1)
        {
            int sum = n*k;
            cout<<"YES"<<endl;
            for(int i =1;i<=n;i++)
            {
                cout<<i<<endl;
            }
            continue;
        }
        if(n%2!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
 
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++)
        {
            int j = i;
            for(int  l = 1; l<=k;l++)
            {
                cout<<j<<" ";
                j+=n;
            }
            cout<<endl;
        }
 
 
    }
    return 0;
}
 