/*
    用一个8*8的矩阵存图，搜索连通性，如果一行或者一列都是R或者B 
    输出R或者B 否则跳过
*/

#include <bits/stdc++.h>
using namespace std;

/*
void solve()
{
    char g[10][10];
    for(int i = 0; i < 8; i ++)
        for(int j = 0; j < 8; j ++)
            cin >> g[i][j];

    for(int i = 0; i < 8; i ++)
    {  
        int a =0, b = 0;
        for(int j = 0; j < 8; j ++)
        {
            if(g[i][j] == 'R') a++;
            if(g[i][j] == 'B') b++;
        }
        if(a == 8) {
            puts("R");
            return;    
        }
    }
   
     for(int i = 0; i < 8; i ++)
    {  
        int a =0, b = 0;
        for(int j = 0; j < 8; j ++)
        {
            if(g[j][i] == 'R') a++;
            if(g[j][i] == 'B') b++;
        }
        if(b == 8) {
            puts("B");
            return;    
        }
    }

}
*/

void solve()
{
    char g[8][8];
    vector<char> v;

    for(int i = 0 ;i < 8 ; i ++)
        for(int j = 0; j < 8; j ++)
        {
            cin >> g[i][j];
            if(g[i][j] == 'R') v.push_back(i);
        }

    for(auto i : v)
    {
        bool ok = true;
        for(int j = 0; j < 8 ; j ++)
        {
            if(g[i][j] != 'R')
            {
                ok = false;
                break;
            }
        }
        if(ok)
        {
            cout << "R" << '\n';
            return;
        }
    }  

    cout << "B" << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n;cin >> n;
    while(n --)
    {
        solve();
    }
    return 0;

}