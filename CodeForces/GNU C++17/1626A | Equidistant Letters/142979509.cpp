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
    w(t)
    {
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            char c = s[i];
            mp[c]++;
        }
        vector<char> once;
        vector<char> twice;
        unordered_map<char, int>::iterator itr;
        for (itr = mp.begin(); itr != mp.end(); ++itr) {
            if(itr->second==1)
            {
                once.push_back(itr->first);
            }
            else
            {
                twice.push_back(itr->first);
            }
        }
        for(int i=0;i<once.size();i++)
        {
            cout<<once[i];
        }
        for(int i=0;i<twice.size();i++)
        {
            cout<<twice[i];
        }
        for(int i=0;i<twice.size();i++)
        {
            cout<<twice[i];
        }
 
        cout<<endl;
 
 
 
    }
 
    return 0;
    
}
 
 