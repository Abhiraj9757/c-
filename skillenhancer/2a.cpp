//write a program to print prime number from 1 to 100
#include<iostream>
using namespace std;
int main(){
    int i,j,p,n;
    for(i=1;i<=100;i++){
                n=i;
                p=1;
                j=2;
                while(j<=n/2){
                              if(n%j==0){
                                         p=0;
                                         break;
                                         }
                                    j++;     
                              }        
                              if(p==1)
                              cout<<n<<",";
                              
                        }
                        system("PAUSE");
                        return 0;
    
    }
