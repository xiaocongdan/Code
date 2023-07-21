#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,k;

ll a[3000000];
void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    int l = 1, r = 2;
    ll cnt = 1;
    ll ans = 1;
    while (l <= r && r <= n)
    {
        cnt = 1;
        while (r <= n && a[r] - a[l] <= k)
        {
            ++l, ++r;
            cnt++;
        }
        ans = max(ans, cnt);
        ++l, ++r;
    }
    cout << n - ans << endl;
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
