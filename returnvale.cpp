#include<iostream>
using namespace std;
//i have created a fuction named menu the benifit is i can make it here for once and can call at the down 
//in main() function as many time as i want
void menu(){
     
      cout<<"1. search"<<endl;
    cout<<"2. display"<<endl;
    cout<<"3. quit"<<endl;
    
    cout<<"Select option from the menu"<<endl;
    
     }
     //even here i have created a option funtion doing the smae thing
     //but you should keep it above the int main() function 
int option(){
      int input;
    cin>>input;
   //return value is taken here 
    return input;

}
int main()
{
    //upar create kiya idar call kiya
   menu();
   
   
   int selection = option();
   //and called here(the return value)
    switch(selection){
                 case 1:
                      cout<<"searching"<<endl;
                      break;
                 case 2:
                      cout<<"Displaying"<<endl;
                      break;
                 
                 case 3:
                      cout<<"Quitting"<<endl;
                      break;
                 
                 default:
                      cout<<"Please select valid option"<<endl;
     
     }   
   system("PAUSE");
   return 0;


}
//function should also be above the main function or the compler cant dedection the function in the main
//you called in the main fonction
