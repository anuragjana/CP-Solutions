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
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // w(t)
    // {
    int zero, one; 
    cin>>zero>>one;
 
    if(one<zero - 1)
    {
        cout<<-1;
        return 0;
    }
 
    if(one>2*(zero+1))
    {
        cout<<-1;
        return 0;
    }
 
 
    if(one==zero-1)
    {
        while(one--)
        {
            cout<<"01";
        }
        cout<<"0"<<endl;
    }
    else
    {
        int extra = 0;
        if(one == 2*zero + 2 )
        {
            extra = 2 ;
            // one -=2;
        }
        if(one == 2*zero + 1 )
        {
            extra = 1;
            // one -=2;
        }
 
        one -= extra;
        int diff = one - zero;
        for(int i=1;i<=diff;i++)
        {
            cout<<"110";
            one-=2;
            zero--;
        }
        diff=zero;
        for(int i=1;i<=diff;i++)
        {
            cout<<"10";
            one--;
            zero--;
        }
        for(int i=1;i<=extra;i++)
        {
            cout<<'1';
        }
        cout<<endl;
 
 
    }
 
// }
 
 
    return 0;
    
}
 