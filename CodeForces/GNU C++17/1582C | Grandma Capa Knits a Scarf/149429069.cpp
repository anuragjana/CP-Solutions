 
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
 
int helper (string s ,int i,int j, char c)
{
    int ans = 0;
    while(i<=j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        else if(s[i]==c)
        {
            ans++;
            i++;
        }
        else if(s[j]==c)
        {
            ans++;
            j--;
        }
        else
        {
            ans = INT_MAX;
            break;
        }
    }
 
    return ans;
}
void solve()
{
    int n;
    string s;
    cin>>n>>s;
    int i =0;
    int j = n-1;
    while(s[i]==s[j])
    {
        i++;
        j--;
    }
    int countA = helper(s,i,j,s[i]);
    int countB = helper(s,i,j,s[j]);
    if(countA == countB && countA==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<min(countA,countB)<<endl;
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