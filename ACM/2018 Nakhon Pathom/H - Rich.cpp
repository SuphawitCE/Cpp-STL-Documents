#include<bits/stdc++.h>

#define for1(i,n) for(int i = 1;i <= (int) n;i++)
#define ll long long

using namespace std;

int T;
ll a, b, c, na, nb ,nc;

int main()
{
	cin >> T;
	while(T--)
	{
		cin >> na >> nb >> nc >> a >> b >> c;
		
		for(int i = 0;i < (1 << 21);i++)
		{
			ll t = 1ll * i *i *i;
			if(t % na == a && t % nb == b && t % nc == c)
			{
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
