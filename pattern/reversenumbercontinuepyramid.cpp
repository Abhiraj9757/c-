#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
            for(int j=5;j>=i;j--)
            {
                    cout<<j;
                    }
                    cout<<endl;
            }
            system("PAUSE");
            return 0;
    }
      /*
      output:
    54321
    5432
    543
    54
    5
    */
