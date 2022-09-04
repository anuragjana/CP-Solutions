#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <iomanip>
#include <cassert>
#include <cstring>
#include <sstream>
#include <numeric>
#include <cstdio>
#include <bitset>
using namespace std;
 
#define error(x) cout << #x << " = " << x << endl;
 
typedef long long ll;
typedef long double ld;
typedef pair <int, int> pii;
 
const int N = 1e5 + 5;
 
string get(string s) {
 reverse(s.begin(), s.end());
 return s;
}
 
string st[N];
 
void solve() {
 map <string, bool> mp;
 int n;
 cin >> n;
 for (int i = 0; i < n; i++)
  cin >> st[i];
 for (int i = 0; i < n; i++) {
  string s = st[i];
  if(s.size() == 1) {
   cout << "YES\n";
   return;
  }
  if(s[0] == s.back() || mp[get(s)] == true) {
   cout << "YES\n";
   return;
  }
  string t = get(s);
  if(t.size() == 2) {
   string k = "a";
   for (int i = 0; i < 26; i++) {
    k[0] = (char)(i + 'a');
    t += k;
    if(mp[t]) {
     cout << "YES\n";
     return;
    }
    t.pop_back();
   }
  }
  else {
   t.pop_back();
   if(mp[t]) {
    cout << "YES\n";
    return;
   }
  }
  mp[s] = true;
 }
 cout << "NO\n";
}
 
int main() {
 ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); 
    int tc;
 cin >> tc;
 while(tc--)
  solve();
}