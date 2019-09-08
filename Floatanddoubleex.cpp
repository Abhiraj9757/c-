#include<iostream>
#include<iomanip>

using namespace std;

int main()
{//it can work 2 more digit
    float fvalue =23.445;
    cout<<fixed<<fvalue<<endl;
    //it work till 54
    double dvalue = 123.456786547;
    cout<<fixed<<setprecision(20)<<dvalue<<endl;
    //uisng set perciosion will let you give more bigger and better value it work till 65
    long double lvalue = 123.456787857534656;
    cout<<fixed<<setprecision(20)<<lvalue<<endl;
    
    int hi;

    cout<<"hi"<<endl;
    cin>>hi;
    
    return 0;
    }
