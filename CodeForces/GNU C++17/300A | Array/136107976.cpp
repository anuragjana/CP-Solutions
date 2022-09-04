// #include <bits/stdc++.h>
// #include<iostream>
// #include<climits>
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
// #define M               1000000007
 
 
// int main()
// {
 
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     int n;
//     cin>>n;
//     vector<int> v1;
//     vector<int> v2;
//     vector<int> v3;
//     mk(arr,n+1,int);   
//     for(int i =0 ;i<n ;i++){
//         cin>>arr[i];
//         if(arr[i]==0)
//             v3.push_back(arr[i]);
//         else if(arr[i]<0)
//         {
//             // if(v1.size()==0)
//             v1.push_back(arr[i]);
//             // else
//             //     v2.push_back(arr[i]);
//         }
//         else
//         {
//             v2.push_back(arr[i]);
//         }
//     }
 
//     while(v1.size() >1){
 
//         auto itr = v1.end();
//         itr--;
//         v2.push_back(*itr);
//         v1.pop_back();   
//     }
 
//        cout<<v1.size()<<" ";
//     for(int i=0;i<v1.size();i++)
//     {
//         cout<<v1[i]<<" ";
//     }
//     cout<<endl;
 
 
//     cout<<v2.size()<<" ";
//     for(int i=0;i<v2.size();i++)
//     {
//         cout<<v2[i]<<" ";
//     }
//     cout<<endl;
//     cout<<v3.size()<<" ";
//     for(int i=0;i<v3.size();i++)
//     {
//         cout<<v3[i]<<" ";
//     }
//     cout<<endl;
 
   
 
//     delete[] arr;
 
 
// }
 
 
#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
 
    for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        if (*it < 0)
        {
            cout << "1 " << *it << endl;
            arr.erase(it);
            break;
        }
    }
 
    bool found(false);
    for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        if (*it > 0)
        {
            found = true;
            cout << "1 " << *it << endl;
            arr.erase(it);
            break;
        }
    }
 
    if (!found)
    {
        cout << "2";
        int count = 0;
        for (vector<int>::iterator it = arr.begin(); count < 2;)
        {
            if (*it < 0)
            {
                cout << " " << *it;
                it = arr.erase(it);
                ++count;
            }
            else
            {
                ++it;
            }
        }
        cout << endl;
    }
 
    cout << arr.size();
    for (size_t i = 0; i < arr.size(); ++i)
    {
        cout << " " << arr[i];
    }
    cout << endl;
 
    return 0;
}