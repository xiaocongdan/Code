#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int rate =0;
    cin >> rate;
    cout << "Division ";
    if(rate <= 1399)   cout << "4" << '\n';
    else if(rate>= 1400 && rate<=1599) cout << "3" << '\n';
    else if(rate >= 1600 && rate <= 1899) cout << "2" << '\n';
    else cout << "1" << '\n';

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
