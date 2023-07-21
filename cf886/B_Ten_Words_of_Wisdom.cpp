#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
void solve()
{
int n;
cin >> n;
vector<pii> v(n);
for (int i = 0; i < n; i++)
{
int x, y;
cin >> x >> y;
if (x > 10)
y = 0;
v[i] = {y, i};
}
sort(v.begin(), v.end(), greater<pii>());

cout << v[0].second + 1 << endl;
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
