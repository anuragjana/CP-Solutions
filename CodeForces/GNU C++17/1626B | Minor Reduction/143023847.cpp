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
        string num;
        cin>>num;
        // bool isDoublePossible = false;
        int index = -1;
        for(int i=0 ;i<num.length()-1;i++)
        {
            int a = num[i] - '0' ;
            int b = num[i+1] - '0';
            int c = a + b;
            if(c>=10)
            {
                // isDoublePossible = true;
                // cout< <isDoublePossible<<endl;
                // break;
                index = i;
            }
        }
 
            // cout<<isDoublePossible<<endl;
 
        if(index!=-1)
        {
            // for(int i= num.length()-1;i>0;i--)
            // {
            //     int a = num[i]-48;
            //     int b = num[i-1] - 48;
            //     int c = a + b;
            //     if(c>=10)
            //     {
            //         cout<<num.substr(0,i-1)<<c<<num.substr(i+1,num.size())<<endl;
            //         break;
            //     }
 
 
            // }   
            for(int i=0;i<num.length();i++)
            {
                if(i==index)
                {
                    cout<<num[i]-'0'+num[i+1]-'0';
                    i++;
                }
                else
                {
                    cout<<num[i];
                }
            }
            cout<<endl;
        }
        else
        {
            // for(int i=0 ;i<num.size()-1;i++)
            // {
            //     int a = num[i]-48;
            //     int b = num[i+1] - 48;
            //     int c = a + b;
            //     if(c>=10)
            //     {
            //         cout<<num.substr(0,i)<<c<<num.substr(i+2,num.size())<<endl;
            //         break;
            //     }
 
 
                int a = num[0]-'0';
                int b = num[1] - '0';
                int c = a + b;
                // cout<<c<<num.substr(2,num.size())<<endl;
                cout<<c;
                for(int i=2;i<num.size();i++)
                {
                    cout<<num[i];
                }
                cout<<endl;
                // break;
 
        }
 
 
 
    }
 
 
 
    return 0;
    
}
 