#include <bits/stdc++.h>
using namespace std;

void solve()
{
    set<int> s;
    int x;
    cin >> x;
    for(int i = 1; i<= x; i ++)
    {
        int a; cin >> a;
        s.insert(a);
    }
    if(x == s.size()) puts("YES");
    else puts("NO");
}

int main()
{
    std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

    int n;
    cin >> n;
    while(n --)
    {
        solve();
    }
    
    return 0;
}