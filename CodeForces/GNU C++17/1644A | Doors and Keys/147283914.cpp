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
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int r=0,b=0,g =0;
        bool ans = true;
        for(int i =0 ;i<6;i++)
        {
            if(s[i]=='r')
                r++;
            if(s[i]=='g')
                g++;
            if(s[i]=='b')
                b++;
            if(s[i]=='R')
            {
                if(r==0)
                {
                    ans = false;
                    break;
                }
            }
            if(s[i]=='B')
            {
                if(b==0)
                {
                    ans = false;
                    break;
                }
            }
            if(s[i]=='G')
            {
                if(g==0)
                {
                    ans = false;
                    break;
                }
            }
 
        }
 
        if(ans == true)
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