#include<iostream>
using namespace std;
int main()
{//outputnikal ka dekho for better understanding
const string password="abhi";
cout<<"ENter the password = "<<endl;
string input;
cin>>input;     
while(input != password);
{
            cout<<"access denied "<<endl<<"please type the correct password"<<endl;
                 cout<<"ENter the password = "<<endl;
                 cin>>input;  
             if (input==password)
             {
                                      cout<<"password accepted"<<endl; 
                                      }                 
                 }
               
             system("PAUSE");
             return 0;
    }
