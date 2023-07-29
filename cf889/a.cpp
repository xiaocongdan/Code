#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e5+10;
int a[N];
void solve()
{
   int n; cin >> n;
   int cnt = 0;
   for(int i = 1; i <= n; i ++)
   {
      cin >> a[i];
   }

   for(int i = 1; i <= n; i ++)
   {
    if(a[i] == i)
    {
      cnt ++;
    }
   }
   if(cnt & 1)
   {
      cout << (cnt/2) +1 << '\n';
   }
   else{
      cout << cnt / 2 << '\n';
   }
}

int main()
{
ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int _;
  cin >> _;
  while(_--)
  {
    solve();
  }
return 0;
}
