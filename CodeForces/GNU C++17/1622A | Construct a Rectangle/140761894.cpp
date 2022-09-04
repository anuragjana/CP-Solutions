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
#define n 1000000
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll x,y,z;
        x = max(a,max(b,c));
        y = min(a,min(b,c));
        z = a+b+c - x - y;
        if(x==y+z)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else if(x==z)
        {
            if(y%2==0)
            {
                cout<<"YES"<<endl;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                continue;
            }
        }
        else if(y==z)
        {
            if(x%2==0){
                cout<<"YES"<<endl;
                continue;
 
            }
            else{
                cout<<"NO"<<endl;
                continue;
            }
        }
        else
            cout<<"NO"<<endl;
    
 
 
    }
    return 0;
    
}
 
 