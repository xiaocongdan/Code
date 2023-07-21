#include <bits/stdc++.h>
using namespace std;

char cd[10][10];
void solve()
{
    for (int i = 1; i <= 8; ++i)
    {
        for (int j = 1; j <= 8; ++j)
        {
            cin >> cd[i][j];
        }
    }
    string ans = "";
    for (int i = 1; i <= 8; ++i)
    {
        for (int j = 1; j <= 8; ++j)
        {
            if (cd[i][j] >= 'a' && cd[i][j] <= 'z')
            {
                ans += cd[i][j];
                for (int k = i + 1; k <= 8; ++k)
                {
                    if (cd[k][j] >= 'a' && cd[k][j] <= 'z')
                    {
                        ans += cd[k][j];
                    }
                    else
                        break;
                }
            }
        }
        if (ans != "")
            break;
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
