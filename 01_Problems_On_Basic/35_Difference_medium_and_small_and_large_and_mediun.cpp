#include <bits/stdc++.h>
using namespace std;

bool test(int x, int y, int z)
         {
            if (x > y && x > z && y > z) return x - y == y - z;
            if (x > y && x > z && z > y) return x - z == z - y;
            if (y > x && y > z && x > z) return y - x == x - z;
            if (y > x && y > z && z > x) return y - z == z - x;
            if (z > x && z > y && x > y) return z - x == x - y;
            return z - y == y - x;
         }
        
int main()
{
    int x, y, z;
    cout<<"enter three numbers\n";
    cin>>x>>y>>z;
    cout<<test(x, y, z);
  
return 0;
}