#include <bits/stdc++.h>
using namespace std;

void solve()
{
     int a,b, c;
     cin >> a >> b >> c;
     int ok = 0;
     if(a + b >= 10 || a + c >= 10 || b + c  >= 10)  ok = 1;
    if(ok)
    {
      puts("YES\n");
    }
    else 
      puts("NO\n");
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
