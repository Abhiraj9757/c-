#include<iostream>
using namespace std;
int main()
{//outputnikal ka dekho for better understanding
const string password="abhi";
cout<<"ENter the password = "<<endl;
string input;
cin>>input;     
if(input==password)
{
         cout<<"password accepted"<<endl;
         
         }
         else
         {
             cout<<"acess denied"<<endl;
          
          cout<<"ENter the password = "<<endl;
          
          cin>>input;   
             }
             system("PAUSE");
             return 0;
    }
