 
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
 
int helper(int index,int f,int s, int k1,int k2,string& s1 )
{   if (index == 10) {
        return 0;
    }
    if (f + k1 < s) {
        return 0;
    }
    if (s + k2 < f) {
        return 0;
    }
    if (s1[index] == '1') {
        if (index % 2 == 0) {
            f++;
            k1--;
        } else {
            s++;
            k2--;
        }
        return 1 + helper(index + 1, f, s, k1, k2, s1);
    } else if (s1[index] == '0') {
        if (index % 2 == 0) {
            k1--;
        } else {
            k2--;
        }
        return 1 + helper(index + 1, f, s, k1, k2, s1);
    } else {
        if (index % 2 == 0) {
            return 1 + min(helper(index + 1, f + 1, s, k1 - 1, k2, s1), helper(index + 1, f, s, k1 - 1, k2, s1));
        } else {
            return 1 + min(helper(index + 1, f, s + 1, k1, k2 - 1, s1), helper(index + 1, f, s, k1, k2 - 1, s1));
        }
    }
 
}
void solve()
{
    string s;
    cin>>s;
    cout<<helper(0,0,0,5,5,s)<<endl;
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