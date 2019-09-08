#include<iostream>
using namespace std;

int main()
{
    
    cout<<"DO you want to date me ?\n";
    cout<<"1. Yes\n";
    cout<<"2.No\n";
    string input;

    cin >>input;
    if(input=="1")
    {
    cout<<"Where you want to go ?\n";
    cout<<"1.park\n";
    cout<<"2.dinner\n";
    cout<<"3. just a walk\n";
    cout<<"4.let it be\n";
    int ans;
    cin>>ans;
    if(ans==1){
    cout<<"done. we gonna meet at park in the evening\n";
    }
    if(ans==2){
    cout<<"done. i see you tonight at the dinner\n";
    }
    if(ans==3){
    cout<<"done.see you at the beach\n";
    }
    if(ans==4){
    cout<<"no problem its okay ;)\n";
    }
    
                  
                  }
     else
     {
                      cout<<"NEXT\n";
         }   
    system("PAUSE");
    return 0;
    
    }
