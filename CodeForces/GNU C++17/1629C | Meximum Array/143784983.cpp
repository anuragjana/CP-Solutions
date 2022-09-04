 
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
// #define M              1000000007
#define pb              push_back
#define precise(n)      fixed << setprecision(n)<< 
#define    M 18
 
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t)
    {
        int n;
        cin>>n;
        int * arr = new int[n];
        vector<int> count(n+1,0);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            count[arr[i]]++;
        }
        vector <bool> visited(n+1,false);
        int j=0;
        int i =0;
        int mex = 0;
        vector<int> ans;
        for(i =0 ; i<n;i++)
        {
            if(arr[i]==mex)
            {
                count[arr[i]]--;
                visited[arr[i]]=true;
                while(visited[mex]==true)
                {
                    mex++;
                }
 
                if(count[mex]==0)
                {
                    ans.pb(mex);
                    mex = 0;
                    for(int k=i;k>=j;k--)
                    {
                        visited[arr[k]]= false;
                    }
                    j=i+1;
                }
            }
            else if(count[mex]==0)
            {
 
                count[arr[i]]--;
                // visited[arr[i]]=true;
                j=j+1;
                ans.pb(mex);
            }
            else
            {
 
                count[arr[i]]--;
                visited[arr[i]]=true;
            }
 
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
 
    }
    return 0;
    
}
 
 
 
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
    
//     ll t, n, i, j, l, mex;
    
//     ll c[200001];
//     bool v[200001];
//     cin>>t;
    
//     for(;t--;)
//     {
        
//         vector<ll> ans;
//         for(i=0; i<=200000; i++)
//         {
//             c[i]=0;
//             v[i]=false;
//         }
        
//         cin>>n;
        
//         ll a[n];
        
//         for(i=0; i<n; i++)
//         {
//             cin>>a[i];
//             c[a[i]]++;
//         }
        
//         mex=0;
//         j=0;
//         for(i=0; i<n; i++)
//         {
//             if(a[i]==mex){
//                 v[a[i]]=true;
                
//                 while(v[mex]==true){
//                     mex++;
//                 }
                
//                 c[a[i]]--;
                
//                 if(c[mex]==0){
//                     ans.push_back(mex);
                    
//                     mex=0;
                    
//                     for(l=i; l>=j; l--){
//                         v[a[l]]=false;
//                     }
//                     j=i+1;
//                 }
//             }else if(c[mex]==0){
//                 ans.push_back(mex);
//                 mex=0;
//                 c[a[i]]--;
//                 j=i+1;
//             }else{
//                 c[a[i]]--;
//                 v[a[i]]=true;
//             }
//         }
        
        
//         if(j!=n){
//             ans.push_back(mex);
//         }
        
//         l=ans.size();
        
//         cout<<l<<"\n";
        
//         for(i=0; i<l; i++){
//             cout<<ans[i]<<" ";
//         }
        
        
//         cout<<"\n";
//     }
// }
 
 
 
 
 
 
 
 
 
 
 
// #include <bits/stdc++.h>
// #include<iostream>
// #include<climits>
// #include<string>
// using namespace std;
 
// #define vi              vector<int>
// #define vll             vector<ll>
// #define pll             pair<ll, ll>
// #define pii             pair<int, int>
// #define ld              long double 
// #define ll              long long 
// #define ff              first
// #define ss              second
// #define vs              vector<string>
// #define vpll            vector<pll>
// #define vb              vector<bool>
// #define mp              make_pair
// #define pb              push_back
// #define endl            '\n'
// #define mii             map<int,int>
// #define pqb             priority_queue<int>
// #define pqs             priority_queue<int,vi,greater<int> >
// #define mk(arr,n,type)  type *arr=new type[n];
// #define w(x)            int x; cin>>x; while(x--)
// #define f(i,a,b)        for(int i=a;i<b;i++)
// // #define M              1000000007
// #define pb              push_back
// #define precise(n)      fixed << setprecision(n)<< 
// #define    M 18
 
 
// int main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     w(t)
//     {
//         int n;
//         cin>>n;
//         int * arr = new int[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>arr[i];
//         }
//         int i=0;
//         set <int> s;
//         for(int k=0;k<=n;k++)
//         {
//             s.insert(k);
//         }
//         set<int> cp = s;
//         vector<int> suffix(n);
//         for(int k = n-1;k>=0;k--)
//         {
//             cp.erase(arr[k]);
//             set<int>::iterator itr = cp.begin();
//             suffix[k] = *itr;
//         }
//         // cout <<suffix<<endl;
//         for(int i=0;i<n;i++)
//         {
//             cout<<suffix[i]<<" ";
//         }
//         set <int> x = s;
//         // vector<int> ans;
//         // while(i<n)
//         // {
//         //     int maxmex = suffix[i];
//         //     int j = i;
//         //     for(j=i;j<n;j++){
//         //         x.erase(arr[j]);    
//         //         set<int>::iterator itr = x.begin();
//         //         int mex = *itr;
//         //         if(maxmex==mex)
//         //         {
//         //             ans.push_back(mex);
//         //             int maxindex = j;
//         //             i = j+1;
//         //             x =s;
//         //             break;
 
//         //         }
//         //     }
 
//         // };
 
//         // cout<<ans.size()<<endl;
//         // for(int i=0;i<ans.size();i++){
//         //     cout<<ans[i]<<" ";
//         // }
//         // cout<<endl;
 
//     }
//     return 0;
    
// }