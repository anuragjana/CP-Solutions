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
// #define pb              push_back
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
 
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
unsigned int onesComplement(unsigned int n)
{
   // Find number of bits in the given integer
   int number_of_bits = floor(log2(n))+1;
  
   // XOR the given integer with poe(2, 
   // number_of_bits-1 and print the result 
   return ((1 << number_of_bits) - 1) ^ n;
}
    bool isPalindrome(string s,int start,int end)
    {
        while(start<=end)
        {
            if(s[start]!=s[end])
                return false;
            start++;
            end--;
        }
        
        return true;
    }
    string longestPalindrome(string s) {
        int maxLength = 0;
        string ans;
        for(int i =0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                if(isPalindrome(s,i,j))
                {
                    // ans = max(ans,j-i+1);
                    if(j+1-i >= maxLength)
                    {
                        ans = s.substr(i,j-i+1);
                        maxLength = j-i+1;
                    }
                    
                }
            }
        }
        
        return ans;
    }
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        // vector<ll> arr;
        // vector<ll> v(1000000000,0);
        set<ll> s;
        map<ll,ll> v; 
        f(i,0,n)
        {
            ll inp;
            cin>>inp;
            // arr.pb(inp);
            if(v[inp]==0)
                s.insert(inp);
            v[inp]++;
        }
        // sort(arr.begin(), arr.end());
        ll count = 0;
        for(auto it : s)
        {
            ll inp = it;
            ll inp1 = x*inp;
 
            if(v[inp]>0)
            {   
                if(v[inp1] == v[inp])
                {
                    v[inp1]=0;
                    // v[inp]=0;
                }
                else if(v[inp1]>v[inp])
                {
                    v[inp1] -= v[inp];
                    // v[inp] = 0;
                }
                else
                {
                    count+=v[inp]-v[inp1];
                    // v[inp]-=v[inp1];
                    v[inp1] = 0;
                }
 
            }
        }
            cout<<count<<endl;
 
    }
    return 0;
}
 
 
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
// // #define pb              push_back
// #define endl            '\n'
// #define mii             map<int,int>
// #define pqb             priority_queue<int>
// #define pqs             priority_queue<int,vi,greater<int> >
// #define mk(arr,n,type)  type *arr=new type[n];
// #define w(x)            int x; cin>>x; while(x--)
// #define f(i,a,b)        for(int i=a;i<b;i++)
// #define M              1000000007
// #define pb              push_back
// #define precise(n)      fixed << setprecision(n)<< 
 
// long long gcd(long long int a, long long int b)
// {
//   if (b == 0)
//     return a;
//   return gcd(b, a % b);
// }
 
// // Function to return LCM of two numbers
// long long lcm(int a, int b)
// {
//     return (a / gcd(a, b)) * b;
// }
// unsigned int onesComplement(unsigned int n)
// {
//    // Find number of bits in the given integer
//    int number_of_bits = floor(log2(n))+1;
  
//    // XOR the given integer with poe(2, 
//    // number_of_bits-1 and print the result 
//    return ((1 << number_of_bits) - 1) ^ n;
// }
//     bool isPalindrome(string s,int start,int end)
//     {
//         while(start<=end)
//         {
//             if(s[start]!=s[end])
//                 return false;
//             start++;
//             end--;
//         }
        
//         return true;
//     }
//     string longestPalindrome(string s) {
//         int maxLength = 0;
//         string ans;
//         for(int i =0;i<s.size();i++)
//         {
//             for(int j=i;j<s.size();j++)
//             {
//                 if(isPalindrome(s,i,j))
//                 {
//                     // ans = max(ans,j-i+1);
//                     if(j+1-i >= maxLength)
//                     {
//                         ans = s.substr(i,j-i+1);
//                         maxLength = j-i+1;
//                     }
                    
//                 }
//             }
//         }
        
//         return ans;
//     }
// int main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         ll n,x;
//         cin>>n>>x;
//         vector<ll> arr(n);
//         // vector<ll> v(1000000000,0);
//         // set<ll> s;
//         unordered_map<ll,int> v; 
//         for(int i =0;i<n;i++)
//         {
//             cin>>arr[i];
//             v[arr[i]]++;
//         }
//         sort(arr.begin(), arr.end());
//         ll count = 0;
//         for(int i = 0;i<n;i++)
//         {
//             if(v[arr[i]]==0)
//                 continue;
//             ll inp = arr[i];
//             ll inp1 = x*inp;
//             if(v[inp1]!=0)
//             {
//                 v[inp]--;
//                 v[inp1]--;
//             }
//             else{
//                 count++;
//                 v[inp]--;        
//             }
//             // if(v[inp]>0)
//             // {   
//             //     if(v[inp1] >0)
//             //     {
//             //         v[inp1]--;
//             //         v[inp]--;
//             //     }
//             //     else
//             //     {
//             //         count++;
//             //         v[inp]--;
//             //     }
 
//             // }
//         }
//             cout<<count<<endl;
 
//     }
//     return 0;
// }
 