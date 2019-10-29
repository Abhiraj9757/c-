#include<iostream>
using namespace std;
int main(){
    for(char i = 'A';i<='E';i++){
            for(char j= 'A';j<=i;j++){
                    
                    cout<<i;
                    }
            cout<<endl;
            }
    system("PAUSE");
    return 0;
    }
/*
output:
       A
       BB
       CCC
       DDDD
       EEEEE
*/
