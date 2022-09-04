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
        int n;
        cin>>n;
        string s;
        cin>>s; 
        string ans = "";
        ans+=s[0];
        char c = s[0];
        int j=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]<s[i-1])
            {
                ans+=s[i];
            }
            else if(s[i]==s[i-1])
            {
                if(s[i]<c)
                {
                    ans+=s[i];
                }
                else
                    break;
 
            }
            else break;
        }
        string ans2 = ans;
        reverse(ans2.begin(), ans2.end());
        ans+=ans2;
        cout<<ans<<endl;
 
    }
    // string a = "cbaabc";
    // string b = "cbaaaabc";
    // if(a<b)
    //     cout<<a;
    // else
    //     cout<<b;
    return 0;
    
}
 
 