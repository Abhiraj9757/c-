#include<iostream>
using namespace std;
int main()
{
    int i,n,fact=1;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
                     fact=fact*i;
                     }
                     cout<<"factorial of "<<n<<"is "<<fact<<endl;
                     system("PAUSE");
                     return 0;
    }
