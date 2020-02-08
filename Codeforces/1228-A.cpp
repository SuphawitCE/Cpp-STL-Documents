#include<bits/stdc++.h>


#define forn(i,n) for(int i = 0;i < (int) n;i++)
#define fore(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)

using namespace std;

int in()
{
	int o;
	cin >> o;
	return o;
}


int main()
{
	int l, r, x;
	cin >> l >> r;
	
	fore(i, l, r)
	{
		int k = 0;
		int d = i;
		set<int> st;
		while(d >= 1)
		{
			st.insert(d % 10);
			d /= 10;
			k++;
		}
		if(st.size() == k) // if true will end program
		{
			cout << i;
			return 0; // end program not read at line 39
		}
	}
	
	cout << -1;
	
	return 0;
}
