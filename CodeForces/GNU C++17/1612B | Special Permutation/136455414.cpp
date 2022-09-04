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
#define M               1000000007
#define pb              push_back
 
 
int main()
{
 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    w(t){
        int n;
        int a ,b;
        cin>>n;
        cin>>a>>b;
        if(a==b+1 && b==n/2){
            for(int i=a;i<=n;i++){
                cout<<i<<" ";
            }
            for(int i=1;i<=b;i++){
                // if()
                cout<<i<<" ";
            }
            cout<<endl;
            continue;
        }
        if(a>b+1 || (a==b+1 && b!=n/2))
        {
            cout<<-1<<endl;
            continue;
        }
 
        mk(arr,n+1,int);
        for(int i=1;i<=n;i++){
            arr[i]=i;
        }
        mk(arr1,(n/2)+1,int);
        mk(arr2,(n/2)+1,int);
        int index1=1,index2=1;
 
        arr1[index1++]=a;
        arr2[index2++]=b;
        bool check = true;
        for(int i=b+1;i<=n;i++){
            arr1[index1++]=i;
            if(index1>n/2)
            {
                bool check = false;
                break;
            }
        }
        if(check ==false)
        {
            cout<<-1<<endl;
            continue;
        }
        bool check2 = true;
        for(int i=1;i<a;i++){
            arr2[index2++]=i;
            if(index2>n/2)
            {
                bool check2= false;
                break;
            }
        }
        if(check2==false)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=a+1;i<=b-1;i++){
            if(index1<=n/2){
                arr1[index1]=i;
                // if(index1!=n/2)
                index1++;
            }
            else if(index2<=n/2){
                arr2[index2]=i;
                // if(index2!=n/2)
                index2++;
            }
        }
 
        if(index1 !=(n/2+1) || index2!=(n/2+1))
        {
            cout<<-1<<endl;
        }
 
        else{
            for (int i=1;i<=n/2;i++){
                cout<<arr1[i]<<" ";
            }
            for (int i=1;i<=n/2;i++){
                cout<<arr2[i]<<" ";
            }
            cout<<endl;
        }
        delete[]arr;
        delete[]arr1;
        delete[]arr2;
 
 
        
 
 
    }
}