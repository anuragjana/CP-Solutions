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
    int n,m;
    cin>>n>>m;
    char arr[101][101];
    for(int i =1;i<=n;i++)
    {
        string s;
        cin>>s;
        for(int j=1;j<=m;j++)
        {
            arr[i][j] = s[j-1];
        }
 
    }
 
    // for(int i =1;i<=n;i++)
    // {
    //     // string s;
    //     // cin>>s;
    //     for(int j=1;j<=m;j++)
    //     {
    //         cout<<arr[i][j];
    //         // arr[i][j] = s[j-1];
    //     }
    //     cout<<endl;
 
    // }
    // cout<<endl;
 
 
        bool answer = true;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(arr[i][j]=='1'){
                if(i>1 && j>1 )
                {
                    if(arr[i][j-1] == arr[i-1][j] && arr[i][j-1]!=arr[i-1][j-1] && arr[i][j-1]=='1')
                    {
                        // cout<<123<<endl;
                        answer = false;
                        break;
                    }
                }
                if(i<n && j>1 )
                {
                    if(arr[i+1][j] == arr[i][j-1] && arr[i+1][j]!=arr[i+1][j-1] && arr[i+1][j]=='1')
                    {
                        // cout<<123<<endl;
                        answer = false;
                        break;
                    }
                }
                if(i<n && j<m )
                {
                    if(arr[i][j+1] == arr[i+1][j] && arr[i][j+1]!=arr[i+1][j+1] && arr[i][j+1]=='1')
                    {
                        // cout<<123<<endl;
                        answer = false;
                        break;
                    }
                }
                if(i>1 && j<m )
                {
                    if(arr[i-1][j] == arr[i][j+1] && arr[i-1][j]!=arr[i-1][j+1] && arr[i-1][j]=='1')
                    {
                        // cout<<123<<endl;
                        answer = false;
                        break;
                    }
                }
            }
 
            }
        }
 
        if(answer == true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
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
 