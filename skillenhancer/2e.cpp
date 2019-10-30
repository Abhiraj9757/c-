//write a program to demostrate the use of modulas,increment ,decerement and conditoional operator
#include<iostream>
using  namespace std;
class operatordemo{
      public:
             int choice,number,number2;
             void displaymenu(){
                  do{
                                cout<<endl<<"**********Operators**********"<<endl;
                                cout<<"\t1. increment"<<endl;
                                cout<<"\t2. Decrement"<<endl;
                                cout<<"\t3. Bitwise AND"<<endl;
                                cout<<"\t4. Bitwise OR"<<endl;
                                cout<<"\t5. Comparision"<<endl;
                                cout<<"\t6. Modulas"<<endl;
                                cout<<"\t7. Exit"<<endl;
                                cout<<"*****************************"<<endl;
                                cout<<"Enter your choice :"<<endl;
                                cin>>choice;
                                switch(choice)
                                {
                                              case 1:
                                                   cout<<"Enter a number :"<<endl;
                                                   cin>>number;
                                                     incrementOperator(number);
                                                   break;
                                                   case 2:
                                                   cout<<"Enter a number :"<<endl;
                                                   cin>>number;
                                                   decrementOperator(number);
                                                   break;
                                                   case 3:
                                                   cout<<"Enter a number :"<<endl;
                                                   cin>>number;
                                                   cout<<"Enter 2 number :"<<endl;
                                                   cin>>number2;
                                                   BitwiseAND(number,number2);
                                                   break;
                                                   case 4:
                                                   cout<<"Enter a number :"<<endl;
                                                   cin>>number;
                                                   cout<<"Enter 2 number :"<<endl;
                                                   cin>>number2;
                                                   BitwiseOR(number,number2);
                                                   break;
                                                   case 5:
                                                   cout<<"Enter a number :"<<endl;
                                                   cin>>number;
                                                   
                                                   cout<<"Enter 2 number :"<<endl;
                                                   cin>>number2;
                                                   comprision(number,number2);
                                                   break;
                                                   case 6:
                                                   cout<<"Enter a number :"<<endl;
                                                   cin>>number;
                                                   
                                                   cout<<"Enter 2 number :"<<endl;
                                                   cin>>number2;
                                                   modulus(number,number2);
                                                   break;
                                                   default:
                                                           cout<<"Please enter a valid option"<<endl;
                                                           }
                                              }
                                while(choice!=7);
                                                 
                                                 }
                                                 void incrementOperator(int num1)
                                                 {
                                                      cout<<"Number"<<num1+1;
                                                      }
                                                      void decrementOperator(int num1){
                                                           cout<<"Number :"<<num1-1;
                                                           }
                                                           void comprision(int num1,int num2){
                                                                if(num1 < num2)
                                                                {
                                                                        cout<<"Second number is greater"<<endl;
                                                                        }
                                                                        else{
                                                                             cout<<"First number is greater";
                                                                             }
                                                                }
                                                                void BitwiseAND(int num1,int num2){
                                                                     cout<<"BitwiseAND operation"<<(num1|num2);
                                                                     }
                                                                     void BitwiseOR(int num1,int num2)
                                                                     {
                                                                          cout<<"BitwiseOR operation "<<(num1|num2);
                                                                          
                                                                          }
                                                                          void modulus(int num1,int num2){
                                                                               cout<<"MOdulas operation of :"<<"("<<num1<<"%"<<num2<<")="<<(num1%num2);
                                                                               
                                                                               }
                                                                          };

int main(){
    operatordemo obj;
    obj.displaymenu();
    system("PAUSE");
    return 0;
    }
