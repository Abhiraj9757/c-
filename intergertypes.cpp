#include <iostream>
//the limit tag is must include when you want to know the limit 
#include<limits>

using namespace std;

int main()

{//normal interger value can store upto 10 digit so its store 4 bytes
      int m=12345345;
    cout<<m<<endl;
    //long store the same size as much as int so bsically both are same
    long int n=98691380;
    cout<<n<<endl;
    //short store samm value half of large 2 bytes
    short int a=9869;
    cout<<a<<endl;
    //this tage is use to know the max or min limit of the integer
    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;

    cout<< INT_MAX<<endl;
    //signed value is use to store negative number where unsigned is for postive number
    signed int c=-12345;
    cout<<c;
    //sizeof is use to know the size of the interger type
    cout<<"size if a integer"<<sizeof(int)<<endl;
    cout<<"size if a long integer"<<sizeof(long int)<<endl;
    cout<<"size if a short integer"<<sizeof(short int)<<endl;
    cout<<"size if a unsiged integer"<<sizeof(unsigned int)<<endl;
    cout<<"size if a signed integer"<<sizeof(signed int)<<endl;
    string abh;
    cout<<"done";
    cin>>abh;
    
    return 0;
    }
