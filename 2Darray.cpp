#include <iostream>
#define size 16
using namespace std;

int main()
{
    int m,n;
    int a[size][size];
    cout<<"Enter the number of rows\n : ";
    cin>>m;
    cout<<"Enter the number of coloms\n : ";
    cin>>n;
    cout<<"Enter the elements in the table \n";
    for(int i=0;i<m;i++)
    {
                       for(int j=0;j<n;j++)
                       {
                                       cin>>a[i][j];
                                       }
                       }
                       //output of t5he array
                       for(int i=0;i<m;i++)
                       for(int j=0;j<n;j++)
                       {
                                       cout<<"a["<<i<<"]"<<"["<<j<<"] : \n";
                                       cout<<a[i][j]<<endl;
                                       
                                       
                                       }
                                       return 0;
                                       
    }
