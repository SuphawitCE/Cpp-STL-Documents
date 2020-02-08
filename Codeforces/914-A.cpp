#include<bits/stdc++.h>

using namespace std;
#define forn(i,n) for(int i = 0;i < (int) n;i++)
#define for1(i,n) for(int i = 1;i <= (int) n;i++)

typedef long long ll;
typedef unsigned long long ull;
typedef double db; 
typedef long double ldb;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair <ll, int> pli;
typedef pair <db, db> pdd; 


int main()
{
	int n;
	cin >> n;
	int m = -1e6 - 11;
	int a, ans;
	for1(i,n)
	{
		cin >> a;
		if(sqrt(a) != (int)sqrt(a) && a > m)	m = a;
		ans = m;
	}

	cout << ans;

	return 0;
}


