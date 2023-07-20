// #include <bits/stdc++.h>
// using namespace std;
// typedef long long LL;
// const int INF = 0x3f3f3f;
// const LL mod =1e9+7;
// const int N = 10005;

// char s[N];

// void solve()
// {
//     int n;
//     scanf("%d%s",&n, s+1);
//     s[n+1] = 'W';
//     int ok = 1, c1 = 0, c2 = 0;
//     for(int i =1; i <= n+ 1; i ++)
//     {
//         if(s[i] == 'W')
//         {
//             if(c1 == 0 && c2 > 0 || c2 == 0 && c1 > 0)
//                 {
//                     ok =0;
//                 }
//             c1 = c2 =0;
//         }else if(s[i] == 'R')
//             c1++;
//         else
//             c2++;
//     }
    
//     puts(ok ? "YES" :"NO");

// }
// int main()
// {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(0);

//     int t;
//     cin >> t;
//     while(t--)
//     {
//     solve();
//     }
//     return 0;
// }


#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

typedef long long LL;
const int INF = 0x3f3f3f;
const LL mod = 1e9 + 7;
const int N = 1e5+5;


void solve()
{
    string s;
    int n;
    cin >> n;
    // getline(cin, s);
    cin >> s;
    // cout << s << '\n'; 
    s = "1" + s;
    s += 'W';
    int ok = 1, c1 = 0, c2 = 0;
    for (int i = 1; i <= n + 1; i++)
    {
        if (s[i] == 'W')
        {
            if (c1 == 0 && c2 > 0 || c2 == 0 && c1 > 0)
            {
                ok = 0;
            }
            c1 = c2 = 0;
        }
        else if (s[i] == 'R')
            c1++;
        else
            c2++;
    }

    puts(ok ? "YES" : "NO");
 

}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
