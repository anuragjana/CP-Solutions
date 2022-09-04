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
        int m,s;
        cin>>m>>s;
        vector<int> maximum(m);
        vector<int> minimum(m);
 
        if(m==1 && s==0)
        {
            cout<<0<<" "<<0<<endl;
            return 0;
        }
        bool maxPossible = true, minPossible = true;
        if(m>1 && s==0)
        {
            minPossible = false;
        }
 
        int numberleft = s;
        for(int i=0;i<m;i++)
        {
            maximum[i] = min(numberleft,9);
            numberleft-=maximum[i];
        }
 
        if(numberleft>0 || maximum[0]==0){
            maxPossible = false;
        }
 
 
        minimum[0]=1;
        for(int i=1;i<m;i++)
        {
            minimum[i]=0;
        }
        numberleft = s-1;
        
 
        for(int i = m-1 ; i>=0;i--)
        {
            minimum[i] += min(numberleft,9);
            numberleft-=minimum[i];
        }
 
        if(numberleft>0 || (minimum[0]==0 && m>1))
            minPossible = false;
 
 
        if(maxPossible && minPossible)
        {
            for(int i=0;i<m;i++)
            {
                cout<<minimum[i];
            }
            cout<<" ";
 
            for(int i=0;i<m;i++)
            {
                cout<<maximum[i];
            }
            cout<<endl;
 
        }
        else
        {
            cout<<-1<<" "<<-1<<endl;
        }
 
    // }
 
 
 
    return 0;
    
}
 