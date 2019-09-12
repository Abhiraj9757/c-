#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    a=5;
    b=a;
    ++b;
    c=++a -b;
    cout<<2*c<<endl;
    int x=7;
    cout<<7<<endl;
    cout<<x++<<endl;
    cout<<x<<endl;
    
    system("PAUSE");
    return 0;
    }
/* a=5
b=a b=5
6
c=6 -6
c=0
2*0
cout=0
*/
