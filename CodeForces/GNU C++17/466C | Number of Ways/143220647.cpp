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
    // int n;
    // cin>>n;
    // vector<ll> arr(n);
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
 
    // vector<ll> prefix(n);
    // prefix[0]=arr[0];
    // for(ll i=1;i<n;i++)
    // {
    //     prefix[i] = prefix[i-1] + arr[i];
    // }
 
    // ll count = 0;
    // for(ll i=0;i<n-1;i++)
    // {
    //     for(ll j = i+2;j<n;j++)
    //     {
    //         ll pre = prefix[i];
    //         ll mid = prefix[j-1] - prefix[i];
    //         ll post = prefix[n-1]-prefix[j-1];
    //         if(pre==mid && mid == post)
    //         {
    //             count++;
    //             // cout<<i<<" "<<j<<endl;
    //         }
    //     }
    // }
    // cout<<count<<endl;
    // }
 
 
 
    ll n;
    cin>>n;
    vector<ll> arr(n);
    ll sum = 0; 
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%3!=0)
    {
        cout<<0;
        return 0;
    }
    ll count = 0;
    ll twothird = 2*(sum/3);
    ll onethird = (sum/3);
 
    ll onethirdcount =0;
    ll twothirdcount = 0;
    ll sumsofar = 0;
 
    // cout<<"i"<<"a"<<" "<<"sumsofar"<<" "<<"sum"<<" "<<"count"<<" "<<"onethirdcount"<<" "<<"twothirdcount"<<endl;
 
    for(ll i=0;i<n-1;i++)
    {
        sumsofar+=arr[i];
        // cout<<i<<1<<" "<<sumsofar<<" "<<sum<<" "<<count<<" "<<onethirdcount<<" "<<twothirdcount<<endl;
        // cout<<count<<" ";
        if(twothird == sumsofar)
        {
            // twothirdcount++;
            count+=onethirdcount;
        }
 
 
        if(onethird == sumsofar)
        {
            onethirdcount++;
        }
        // if(twothird == sumsofar)
        // {
        //     twothirdcount++;
        //     count+=onethirdcount;
        // }
 
        // cout<<count<<endl;
        // cout<<i<<2<<" "<<sumsofar<<" "<<sum<<" "<<count<<" "<<onethirdcount<<" "<<twothirdcount<<endl;
 
    }
 
    cout<<count;
 
 
 
    return 0;
    
}
 