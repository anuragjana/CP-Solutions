 
 
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
        ll l,r,k;
        cin>>l>>r>>k;
        if(l==r)
        {
            if(l==1)
            {
                cout<<"NO"<<endl;
            }
            else
                cout<<"YES"<<endl;
            continue;
        }
        ll count = (r-l)/2;
 
        if(l%2==0 && r%2==0)
        {
            count = count;
        }
        else
            count++;
        if(count<=k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
    
}