#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int maxn =1e7+10;
ll n, m;


ll a[maxn];

int check(ll x)
{
    ll sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        ll tmp = a[i] + x + x;
        sum += tmp * tmp;
        if (sum > m)
            return 1;
    }
    return sum >= m ? (sum == m ? 0 : 1) : -1;
}

void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n, greater<ll>());
    ll l = 0, r = 1e9;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) >> 1;
        int flag = check(mid);
        
        if (flag == 0)
        {
            ans = mid;
            break;
        }
        else if (flag == 1)
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
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
