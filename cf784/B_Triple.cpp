#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  map<int, int> mp;
  // int flag = 0;
  for (int i = 0; i < n ; i++)
  {
    int x;
    cin >> x;
    mp[x]++; 
  }

  for(auto &i : mp)
  {
    if(i.second >= 3)
    {
      cout << i.first << '\n';
      return;
      // flag = 1;
    }
  }

  // if(flag == 0) 
  cout << "-1" << '\n'; 
  // map<int,int>::iterator it = mp.begin();
  // for(it =mp.begin(), it!=mp.end(); it++ )
  // {

  // }
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
