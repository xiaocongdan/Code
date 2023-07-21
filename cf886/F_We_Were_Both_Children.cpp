#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6+10;
const int inf = 0x3f3f3f;
#define ll long long
ll n;
ll f[maxn];
void solve()
{
    cin >> n;
    map<ll, ll> mp;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        f[i] = 0;
        mp[a[i]]++;
    }
    f[n] = 0;
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    for (int i = 0; i < a.size(); ++i)
    {
        // cout << a[i] << " ";
        for (int j = a[i]; j <= n; j += a[i])
        {
            // cout << j << " ";
            f[j] += mp[a[i]];
        }
        // cout << endl;
    }
    ll ans = -inf;
    for (int i = 1; i <= n; ++i)
    {
        ans = max(f[i], ans);
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
