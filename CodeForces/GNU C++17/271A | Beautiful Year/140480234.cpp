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
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; 
    cin>>n;
    while(1)
    {
        n++;
        int a,b,c,d;
 
        a=n/1000;
        b=n/100%10;
        c=n/10%10;
        d=n%10;
        if(a!=b && a!=c && a!=d)
        {
            if(b!=c && b!=d)
            {
                if(c!=d){
                    cout<<n;
                    break;
                }
            }
        }
 
    }
    return 0;
}
 