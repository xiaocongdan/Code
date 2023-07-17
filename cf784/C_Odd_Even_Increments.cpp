#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n+1);
  map<int, int> mp1;
  map<int, int> mp2;
  for (int i = 0; i < n; i++)
  {
    //     int x; cin >> x;
    //     v.push_back(x);
    cin >> v[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 1)
    {
      mp1[v[i] % 2]++;
    }
    else
    {
      mp2[v[i] % 2]++;
    }
  }
  if (mp1.size() >= 2 || mp2.size() >= 2)
  {
    cout << "NO" << '\n';
  }
  else
  {
    cout << "YES" << '\n';
  }
}

int main()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
