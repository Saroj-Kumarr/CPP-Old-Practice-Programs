#include <bits/stdc++.h>
using namespace std;

namespace first
{
void display()
{
    cout<<"first display\n";
}
}

namespace second
{
void display()
{
    cout<<"second display\n";
}
}

using namespace first;

int main()
{
     display();
    second::display();
  
return 0;
}