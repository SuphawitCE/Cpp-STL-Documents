#include<bits/stdc++.h>

#define for1(i,n) for(int i = 1;i <= (int) n;i++)


using namespace std;

const int maxn = 2e6 + 10;
int T, n, a[maxn];



int main()
{
	cin >> T;
	while(T--)
	{
		cin >> n;
		for1(i,n)	cin >> a[i];
		sort(a + 1,a + n + 1);
		int cnt = 0, now = 0;
		for1(i,n)
		{
			if(now == 0 || abs(now - a[i]) > 10)
			{
				cnt++;
				now = a[i] + 10;
			}
		}
		printf("%d\n",cnt);
	}
	
}


