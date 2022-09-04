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
// #define M               1000000007
// #define pb              push_back
// #define precise(n)      fixed << setprecision(n)<< 
 
// int main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     ll n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }    
//     if(n == 1 )
//     {
//         cout<<-1<<endl;
//         return 0;
//     }
//     if(n==2)
//     {
//         if((arr[0]+arr[1])%2==0)
//         {
//             cout<<1<<endl;
//             cout<<(arr[0]+arr[1])/2;
//         }
//     }
//     sort(v.begin(), v.end());
//     int a = 0;
//     int b = 0;
//     a = arr[1]-arr[0];
//     mp[a]++;
//     unordered_map<int,int> mp;
//     for(int i=1;i<n-1;i++)
//     {
//         if((mp[arr[i+1]-arr[i]])==0);  
//             b = arr[i+1]-arr[i];
 
//         mp[arr[i+1]-arr[i]]++;
//     }
//     if(mp.size()>2)
//     {
//         cout<<0<<endl;
//         return 0;
//     }
//     if(mp.size()==1)
//     {
//         cout<<2<<endl;
//         cout<<arr[0]-(arr[1]-arr[0])<<" "<<arr[n-1]+(arr[1]-arr[0])<<endl;
//         return 0;
//         // cout<<-1<<endl;
//     }
//     if(mp.size()==2)
//     {
//         if(a==0 || b==0)
//         {
//             cout<<0<<endl;
//             return 0;
//         }
//         if((mp[a]==n-2 && mp[b]==1 ) ||(mp[b]==n-2 && mp[a]==1 ))
//         {
 
 
//         }
 
 
//     }
 
 
 
//     return 0;
    
// }
 
 
 
#include <bits/stdc++.h>
 
using namespace std;
 
int n, a[int(1e5 + 1)];
set<int> st, all;
 
int main() {
  scanf("%d", &n);
  for(int i = 0; i < n; ++i) {
    scanf("%d", a + i);
    all.insert(a[i]);
  }
  
  if(n == 1) {
    puts("-1");
    return 0;
  }
  
  sort(a, a + n);
  
  if(n == 2) {
    if(a[0] == a[1])
      printf("1\n%d\n", a[0]);
    else if((a[1] - a[0] - 1) & 1)
      printf("3\n%d %d %d\n", a[0] - (a[1] - a[0]), (a[0] + a[1]) / 2, a[1] + (a[1] - a[0]));
    else
      printf("2\n%d %d\n", a[0] - (a[1] - a[0]), a[1] + (a[1] - a[0]));
    return 0;
  }
  
  for(int i = 1; i < n; ++i)
    st.insert(a[i] - a[i - 1]);
  
  if(st.size() == 1) {
    if(all.size() == 1)
      printf("1\n%d\n", a[0]);
    else
      printf("2\n%d %d\n", a[0] - *st.begin(), a[n - 1] + *st.begin());
  } else if(st.size() == 2) {
    int mn = *st.begin();
    int mx = *(++st.begin());
    
    if(mn + mn == mx) {
      int tmp = 0, idx;
      for(int i = 1; i < n; ++i)
        if(a[i] - a[i - 1] == mx)
          ++tmp, idx = i;
      if(tmp == 1)
        printf("1\n%d\n", (a[idx] + a[idx - 1]) / 2);
      else
        puts("0");
    } else {
      puts("0");
    }
  } else {
    puts("0");
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
// #define pb              push_back
// #define endl            '\n'
// #define mii             map<int,int>
// #define pqb             priority_queue<int>
// #define pqs             priority_queue<int,vi,greater<int> >
// #define mk(arr,n,type)  type *arr=new type[n];
// #define w(x)            int x; cin>>x; while(x--)
// #define f(i,a,b)        for(int i=a;i<b;i++)
// #define M               1000000007
// #define pb              push_back
// #define precise(n)      fixed << setprecision(n)<< 
 
// int main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//     // w(t)
//     // {
//     ll r,g,b;
//     cin>>r>>g>>b;
//     ll ans = min(r,min(g,b));
//     // cout<<ans<<endl;
//     r-=ans;
//     b-=ans;
//     g-=ans;
//     // cout<<r<<g<<b<<endl
 
//     ll x,y;
//     x = max(max(r,g),b);
//     y = r + b + g - x- min(min(r,g),b);
//     // cout<<"x"<<x<<"y"<<y<<endl;
 
//     while(x>=3 && y>=3)
//     {
//         ans+=2;
//         x-=3;
//         y-=3;
//         // cout<<"x"<<x<<"y"<<y<<endl;
//     }
//     int maximum = max(x,y);
//     int minimum = min(x,y);
//     // cout<<"maximum"<<maximum<<endl;
//     // cout<<"min"<<minimum<<endl;
//     if(minimum ==1)
//     {
//         if(maximum>=2)
//         {
//             ans++;
//             // cout<<ans<<endl;
//         }
//     }
//     if(minimum==2)
//     {
//         if(maximum>=4)
//         {
//             ans+=2;
//             // cout<<ans<<" "<<1<<endl;
//         }
//         else if(maximum>=1){
//             ans++;
//             // cout<<ans<<" "<<2<<endl;
//         }
//     }
//     cout<<ans<<endl;
// // }
//     return 0;
// }
 