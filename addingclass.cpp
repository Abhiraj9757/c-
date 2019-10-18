#include<iostream>
using namespace std;

class test{
      public:
             int a,b;
             public:
                    void disp(){
                         cout<<"Addition of"<<a<<"+"<<b<<"="<<a+b<<endl;
                         }
                    
      };
      int main(){
          test obj;
          obj.a=10;
          obj.b=15;
          obj.disp();
          system("PAUSE");
          return 0;
          }
