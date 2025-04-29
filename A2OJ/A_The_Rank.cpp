#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
	cin >> n;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int S = a + b + c + d;
	int Ans = 1;
	for(int i = 2; i <= n; i++)
	{
	    cin >> a >> b >> c >> d;
	    if(a + b + c + d > S)
	    {
	        Ans++;
	    }
	}
	printf("%d\n",Ans);
	return 0;
}