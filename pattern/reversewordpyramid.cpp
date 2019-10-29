#include<iostream>
using namespace std;
int main(){
    for(char i='E';i>='A';i--){
             for(char j='A';j<=i;j++)
             {
                      cout<<j;
                      }
                      cout<<endl;
             }
             system("PAUSE");
             return 0;
    }
/*
ABCDE
ABCD
ABC
AB
A
*/
