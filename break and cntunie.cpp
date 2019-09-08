#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<10;i++)
    {
                     cout<<"output = "<<i<<endl;

            if(i== 7){
                    
                    cout<<"looping"<<endl;
                    break;//jahag pa he break karta hai according to condition
                    }    
                    if(i==5){
                             cout<<"contuning"<<endl;
                             continue;//skip karta hai phir continue
                             }     
                    cout<<"program quiting"<<endl;
                    } 
                    //do while ma break 
                      const string password="hello";
    string input;
    
     do {
                         cout<<"Enter the password = "<<flush;
                         cin>>input;
                         if (input== password){
                                     break;
                                     }
                                     else{
                             cout<<"Password denied"<<endl;
                             }
                         }
                         while(true);
                         {
                                               cout<<"password accepeted"<<endl;
                                               }         
                     system("PAUSE");
                     return 0;
                     
        }
