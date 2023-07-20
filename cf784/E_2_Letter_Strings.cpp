// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int a[200][200];
// void solve()
// {
//     int n; cin >> n;
//     for(int i = 'a' ; i <= 'k'; i ++)
//     {
//         for(int j = 'a' ; j <= 'k'; j ++)
//         {
//             a[i][j] = 0;
//         }
//     }
//     ll ans = 0;
//     for(int i = 0; i < n; i ++)
//     {
//         char x, y;
//         cin >> x >> y;
//         for(int j = 'a' ; j <= 'k'; j ++)
//         {
//             if(j != x) ans += a[j][y];
//             if(j != y) ans += a[x][j];
//         }
//         a[x][y] ++;
//     }
//     cout << ans << '\n';
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


#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5+10;
map<char,int>mp1,mp2;
map<string,int>mp;
void cf(){
    mp.clear();
    mp1.clear();
    mp2.clear();
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        sum+=mp1[s[0]];
        sum+=mp2[s[1]];
        sum-=mp[s]*2;
        mp1[s[0]]++;
        mp2[s[1]]++;
        mp[s]++;
    }
    cout<<sum<<endl;
} 
signed main(){
    int t=1;
    cin>>t;
    while(t--){
        cf();
    }
}
  