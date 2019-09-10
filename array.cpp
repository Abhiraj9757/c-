#include<iostream>
using namespace std;

int main(){
    
    int values[3];
    values[0]=12;
    values[1]=122;
    values[2]=124;
    cout<<"VALUES of array"<<endl;
    cout<<"***************"<<endl;
    cout<<values[0]<<endl;
     cout<<values[1]<<endl;
      cout<<values[2]<<endl;
      
      cout<<"Numbers of array"<<endl;
      cout<<"**************"<<endl;
      double number[4]={2.5,5.6,4.4,3.2};
      cout<<number[0]<<endl;
      cout<<number[1]<<endl;
      cout<<number[2]<<endl;
      cout<<number[3]<<endl;
      cout<<"Array uasing for loop"<<endl;
      cout<<"******************"<<endl;
      for(int i=0;i<4;i++){
                       cout<<endl<<"ELement in array"<<i<<"is"<<number[i]<<endl;
                       }
    system("PAUSE");
    return 0;
    }
