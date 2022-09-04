 
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
#define f(i,a,b)        for(int i=a;i<=b;i++)
#define fb(i,a,b)       for(int i=a;i>=b;i--)
#define M              1000000007
#define pb              push_back
#define precise(n)      fixed << setprecision(n)<< 
 
void solve()
{
    int n;
    string s;
    char c;
    cin>>n;
    cin>>c;
 
    cin>>s;
    // int odd,even = 0 ;
    bool check = true;
    ll in = -1;
    for(int i = 0;i<n;i++)
    {
        if(s[i]==c)
        {
            in = i;
        }
        if(s[i]!=c)
        {
            check = false;
        }
    }
    if(check)
    {
        cout<<0<<endl;
    }
    else if(in == -1)
    {
        cout<<2<<endl<<n-1<<" "<<n<<endl;
    }
    else if(in == n-1)
    {
        cout<<1<<endl<<n<<endl;
    }
    else if(in>=n/2)
    {
        cout<<1<<endl<<in+1<<endl;
    }
    else
    {
        cout<<2<<endl<<n-1<<" "<<n<<endl;
    }
 
 
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