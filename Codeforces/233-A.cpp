#include<bits/stdc++.h>

using namespace std;
#define forn(i,n) for(int i = 0;i < (int) n;i++)
#define for1(i,n) for(int i = 1;i <= (int) n;i++)


int main()
{
    int n;
    cin >> n;
    int x;
    if(n % 2 != 0)  cout << -1;
    else
    {
        cout << 2 << " " << 1;
        for(x = 4;x <= n;x += 2)    cout << " " << x << " " << x - 1;
        cout << "\n";
    }
    
    
 
    return 0;
}

