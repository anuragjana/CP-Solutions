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
        int n;
        cin>>n;
        mk(arr,n,int);
        int min_term = INT_MAX;
        for(int i=0 ;i<n;i++)
        {
            cin>>arr[i];
            min_term = min(min_term,arr[i]);
        }
 
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==min_term)
                continue;
            cout<<arr[i]<<" "<<min_term<<endl;
            count++;
            if(count==n/2)
                break;
        }
    }
    return 0;
}
 
 
 
 