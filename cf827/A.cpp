#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;


void solve()
{
    int a[4];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    if(a[0] + a[1] == a[2])
    {
        puts("YES");
        return;
    }
    puts("NO");
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
     
     int n;
     cin >> n;
    while(n --)
    {
        solve();
    }
}