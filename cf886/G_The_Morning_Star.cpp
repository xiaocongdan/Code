#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>
void solve()
{
    int n;
    cin >> n;
    
    map<int, int> mp1, mpp1, mppp1, mpppp1;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        mp1[y - x]++;
        mpppp1[y + x]++;
        mpp1[y]++;
        mppp1[x]++;
    }
    int ans = 0;
    for (auto [a, b] : mp1)
    {
        if (b > 1)
        {
            // cout << a << " " << b << endl;
            ans += (b - 1 + 1) * (b - 1) / 2 * 2;
        }
    }
    // cout << "&&" << ans << endl;
    for (auto [a, b] : mpppp1)
    {
        if (b > 1)
        {
            // cout << a << " " << b << endl;
            ans += (b - 1 + 1) * (b - 1) / 2 * 2;
        }
    }
    for (auto [a, b] : mpp1)
    {
        if (b > 1)
        {
            // cout << b << endl;
            ans += (b - 1 + 1) * (b - 1) / 2 * 2;
        }
    }
    // cout << "**" << ans << endl;
    for (auto [a, b] : mppp1)
    {
        if (b > 1)
        {
            // cout << b << endl;
            ans += (b - 1 + 1) * (b - 1) / 2 * 2;
        }
    }
    // cout << "()" << ans << endl;
    cout << ans << endl;
}
signed main()
{
    ios::sync_with_stdio(0);
    int _;
    cin >> _;
    while (_--)
    {
        solve();
    }
    return 0;
}