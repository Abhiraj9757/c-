#include<iostream>
using namespace std;

int main()
{//nested if loop 
    string password="abhi";
    cout<<"Enter the pasword\n";
    
    string input;
    cin>>input;
  
    if(input==password){
         cout<<"Access grnated\n";
         
         
    }
    if(input != password){
                        cout<<"Acess denied\n";
                        }
                        if(password=="abhi")
                        {
                                            cout<<"its is the password"<<endl;
                                            }
                                            if(input=="abhi")
                                            {
                                                             cout<<"done\n";}
                  system("PAUSE");
                  return 0;      
}

