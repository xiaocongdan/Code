#include <bits/stdc++.h>
using namespace std;

void solve()
{
     
     int n; cin >> n;
     vector<int> v(n);
     int ans1 = 0, ans2= 0;
     int cnt=0;
     for(int i = 0 ;i  < n; i ++)
     {
        cin >> v[i];
        // cout << v[i] << " ";
     }
      int l = 0, r=n-1;
      while(l < r)
      {
        while(l < n && ans1 < ans2)
        {
            ans1 +=v[l++];
            cnt++;
        }
        while(r > 0 && ans1 > ans2)
        {
            ans2 +=v[r--];
            cnt++;
        }
      }

      cout << cnt << '\n';
     
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
    solve();
    }
    return 0;
}
