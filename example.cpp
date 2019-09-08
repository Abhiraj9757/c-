#include<iostream>

using namespace std;

int main()
{
    int i,j,c;
    cout<<"Enter two number"<<endl;
    
    cin>>i>>j;
    c=i+j;
    cout<<i<<"+"<<j<<"+"<<c<<endl;
    
    c=i-j;

    cout<< i << "-" << j << "=" <<c <<endl;
    
    if (i<=j)
    {
        
        cout<<j<<"is greater"<<endl;
        }
        
        else
        {
            cout<<i<<"is grqater"<<endl;
            } 
            
              
    system("PAUSE");
    return 0;
    }
