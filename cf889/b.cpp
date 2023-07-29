#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 1e5+10;

void solve()
{
  ll a; cin >> a;
  ll cnt =0;
  int i = 1;
  while(1)
  {
    
    if(a % i == 0)
    {
        ++ cnt;
        i ++;
    }
    else
      break;
  }
  cout << cnt << '\n';
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
