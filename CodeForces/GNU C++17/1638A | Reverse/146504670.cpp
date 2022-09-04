 
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
#define M              1000000007
#define pb              push_back
#define precise(n)      fixed << setprecision(n)<< 
// #define    M 18
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
 
        int idx1 = -1,idx2 = -1;
 
        for(int i=1;i<=n;i++)
        {
            if(arr[i]!=i)
            {
                idx1 = i;
                for(int j=i+1;j<=n;j++)
                {
                    if(arr[j]==i)
                    {
                        idx2 = j;
                        break;
                        // swap(arr[i],arr[j]);
                    }
 
                }
            }
 
            if(idx2!=-1)
                break;
        }
 
        if(idx1==-1 && idx2 == -1)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        else{
 
        for(int i=1;i<idx1;i++)
        {
            cout<<arr[i]<<" ";
        }
        for(int i = idx2;i>=idx1;i--)
        {
            cout<<arr[i]<<" ";
        }
        for(int i=idx2+1;i<=n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
        cout<<endl;
    }
 
 
    return 0;
    
}