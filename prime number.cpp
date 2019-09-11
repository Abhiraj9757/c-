#include<iostream>

using namespace std;

int main(){
    //declaring variables
    int i,j,n,p;
    //using for loop to set range from 1 to 100
    for(i=1;i<=100;i++){
    n=i;
    j=2;
    p=1;
        //while loop will check if the remainder is 0 or 1 if its 0 it will skip it and if the reminnder will 1 its a prime number
    while(j<=n/2){
    if(n%j==0){
              p=0;
              break;
              }
        //j will increase the number and keep the loop working untill it reaches to 100
              j++;
    }
        //when reminder is 0 output will be printed as prime number
    if(p==1)
    cout<<n<<",";
    }
    system("PAUSE");
    return 0;
    }
