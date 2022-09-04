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
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll, ll> m;
    ll sum = 0;
    f(i,0,n-1) {
        cin >> v[i];
        sum += v[i];
        m[v[i]]++;
    }
    if ((2 * sum % n) != 0) {
        cout << 0 << endl;
        return;
    }
    ll required = (2 * sum) / n;
    ll cnt = 0;
    for (int i = 0; i < n; ++i) {
        ll aux = required - v[i];
        if (m.count(aux)) cnt += m[aux];
        if (v[i] == aux) cnt -= 1;
    }
    cout << (cnt / 2) << endl;
 
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
 