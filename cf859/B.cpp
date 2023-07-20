/*
    给一个数组a[N]，两个人前后拿走a[i],前者只能拿偶数，后者拿奇数个；除了最初为空时，
    满足前者的数量一直大于后者；
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1010;
int a[N];
int main()
{
    int n;scanf("%d",&n);
    
    while(n --)
    {
        long long pa = 0,pb = 0;
        int t = 0; scanf("%d",&t);

        
        for(int i = 0; i < t; i ++)
        {
            scanf("%d",&a[i]);
            if(a[i] & 1) pb += a[i];
            else pa += a[i];
        }
        if(pa > pb) puts("YES");
        else puts("NO");
    }
    return 0;
}