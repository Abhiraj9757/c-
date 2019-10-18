#include<iostream>
using namespace std;
//its just like if else statement for better understating prefer valet voting program
int main()
{
    int value =8;
    //here declared the variable
    switch(value){
                  case 1 :
                       cout<<"this is value 1"<<endl;
                       break;
                       //break statement is must to stop it here only or else it will print the other line too
                  case 2 :
                       cout<<"This is value 2"<<endl;
                       break;
                  case 3 :
                       cout<<"This is value 3"<<endl;
                       break;
                  case 4 :
                       cout<<"This is value 4"<<endl;
                       break;
                  case 5 :
                       cout<<"This is value 5"<<endl;
                       break;
                  default :
                       cout<<"This is a unregonised value "<<endl;
                       //default case is mandatory so it will let the user know  better about your program
                       //it is the last statement to no break statemrnt is used
                       
                  
                 }
system("PAUSE");
    return 0;
     
    }
