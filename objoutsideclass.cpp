#include<iostream>
using namespace std;
class test{
      public:
      void disp();
      };
      
     void test::disp(){
                cout<<"HELLO WORLD"<<endl;
                }
int main(){
    test obj;
    obj.disp();
    
    system("PAUSE");
    return 0;
    }
