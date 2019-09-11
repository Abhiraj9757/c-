#include<iostream>

using namespace std;

int main(){
    int i,j,n,p;
    for(i=1;i<=100;i++)
    {
    n=i;
    j=2;
    p=1;
    while(j<=n/2)
    {
    if(n%j==0)
    {
              p=0;
              break;
              }
              j++;
    }
    if(p==1)
    cout<<n<<",";
    }
    system("PAUSE");
    return 0;
    }
