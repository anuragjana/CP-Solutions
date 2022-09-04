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
#define f(i,a,b)        for(int i=a;i<b;i++)
#define M              1000000007
#define pb              push_back
#define precise(n)      fixed << setprecision(n)<< 
 
void solve()
{
        ll a, s;
    cin >> a >> s;
    vector<int>b;
    while(s){
        int x = a % 10;
        int y = s % 10;
        if(x <= y) b.emplace_back(y - x);
        else{
            s /= 10;
            y += 10 * (s % 10);
            if(x < y && y >= 10 && y <= 19) b.emplace_back(y - x);
            else{
                cout << -1 << '\n';
                return;
            }
        }
        a /= 10;
        s /= 10;
    }
    if(a) cout << -1 << '\n';
    else{
        while (b.back() == 0) b.pop_back();
        for(int i = b.size() - 1; i >= 0; i--) cout << b[i];
        cout << '\n';
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
 