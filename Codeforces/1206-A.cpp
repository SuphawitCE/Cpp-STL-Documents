#include<bits/stdc++.h>

#define forn(i,n) for(int i = 0;i < (int)n;i++)
#define for1(i,n) for(int i = 1;i <= (int)n;i++)
#define fore(i,l,r) for(int i = l;i < (int)r;i++)

using namespace std;

int n, m;

const int maxn = 105;

int a[maxn], b[maxn];

int main()
{
	cin >> n;
	for1(i,n)	cin >> a[i];
	
	sort(a + 1, a + n + 1, greater<int>()); // highest to lowest for array
	//for1(i,n)	cout << a[i] << " ";
	cin >> m;
	for(int j = 1;j <= m;j++)	cin >> b[j];
	
	sort(b + 1, b + m + 1, greater<int>()); // highest to lowest for array
	//for1(i,n)	cout << b[i] << " ";
	
	cout << a[1] << " " << b[1];
	
	return 0;
}



