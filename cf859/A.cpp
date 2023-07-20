#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	int n;scanf("%d",&n);
	while(n --)
	{
		ll a, b , c;
		scanf("%d%d%d",&a,&b,&c);
		
		if(a + b == c)
		{
			puts("+");
		}
		else
		{
			puts("-");
		}
	}
	
	return 0;
	
	
	
	
}