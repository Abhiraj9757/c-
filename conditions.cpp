#include<iostream>
using namespace std;
int main()
{
    int x=8;
    int y=5;
    /*
    greaterthan
    less than 
    greater equal
    lessthanequal
    eualto
    not eqalto
    and
    or
    bool
    */
    if(x>5){
            cout<<"condition1 : true"<<endl;
            }
     else{
          cout<<"condition1 : false"<<endl; 
          }   
          if(y<5){
            cout<<"condition2 : true"<<endl;
            }
     else{
          cout<<"condition2 : false"<<endl; 
          }   
          if(x<=9){
            cout<<"condition3 : true"<<endl;
            }
     else{
          cout<<"condition3 : false"<<endl; 
          }    
          if(y<=5){
            cout<<"condition4 : true"<<endl;
            }
     else{
          cout<<"condition4 : false"<<endl; 
          }  
          if(x==5){
            cout<<"condition5 : true"<<endl;
            }
     else{
          cout<<"condition5 : false"<<endl; 
          }  
    if(x!=5){
            cout<<"condition6 : true"<<endl;
            }
     else{
          cout<<"condition2 : false"<<endl; 
          }  
          if(x<=9 && y==5){
            cout<<"condition7 : true"<<endl;
            }
     else{
          cout<<"condition7 : false"<<endl; 
          }  
          if(x<5 || y!=5){
            cout<<"condition8 : true"<<endl;
            }
     else{
          cout<<"condition8 : false"<<endl; 
          }  
          //or (||)ma konsa bhe ek true raha toh op ture hoga warna dono false raha toh pura false
          bool condition9 =(x<5 || y!=5);
          cout<<condition9<<endl;
          //and(&&) ma dono condiotion true honi chaiye thab hi hev output apna ture hoga warna falise
          bool condition10 =(x<=9 && y==5);
          cout<<condition10<<endl;
          
    
    system("PAUSE");
    return 0;
    }
