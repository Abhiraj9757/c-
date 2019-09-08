#include<iostream>
using namespace std;
int main()
{//do ma phela karta hai phir dekhta hai ki condition kyah hai
    const string password="hello";
    string input;
    
     do {
                         cout<<"Enter the password = ";
                         cin>>input;
                         if (input!= password){
                             cout<<"Password denied"<<endl;
                             }
                         }
                         while(input!=password);
                         {
                                               cout<<"password accepeted"<<endl;
                                               }                     
    system("PAUSE");
    return 0;
    }
