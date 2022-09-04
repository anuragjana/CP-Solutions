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
 
 
ll count_digits(long long n)
{
  ll ans = floor(log10(n) + 1);
  return ans;
 
}
 
 
int main()
{
 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t){
        long long x1,x2,p1,p2;
        cin>>x1>>p1;
        cin>>x2>>p2;
        ll d1 = count_digits(x1);
        ll d2 = count_digits(x2);
        if((d1+p1)>(d2+p2))
        {
            cout<<">"<<endl;
 
        }
        else if((d1+p1)<(d2+p2))
        {
            cout<<"<"<<endl;
        }
        else
        {
            if(d1>d2)
            {
                x2 = x2*pow(10,(d1-d2));
                if(x1>x2)
                    cout<<">"<<endl;
                else if(x1==x2)
                {
                    cout<<"="<<endl;
                }
                else{
                    cout<<"<"<<endl;
                }
            }
            else if(d1<d2)
            {
                x1 = x1*pow(10,(d2-d1));
                if(x1>x2)
                    cout<<">"<<endl;
                else if(x1==x2)
                {
                    cout<<"="<<endl;
                }
                else{
                    cout<<"<"<<endl;
                }
            }
            else if(d1==d2)
            {
                // cout<<"="<<endl;
                                if(x1>x2)
                    cout<<">"<<endl;
                else if(x1==x2)
                {
                    cout<<"="<<endl;
                }
                else{
                    cout<<"<"<<endl;
                }
 
            }
        }
    }
    return 0;
}
 
 
 
 