#include<iostream>
using namespace std;

int main(){
    
    int ch;
    do{
        cout<<"India : [1]"<<endl;
        cout<<"Usa : [2]"<<endl;
        cout<<"Dubai : [3]"<<endl;
        cout<<"Exit : [4]"<<endl;
        cout<<"Enteer your choice : "<<endl;
        cin>>ch;
        
        switch(ch){
                   case 1 :
                        cout<<"Delhi , Rupee"<<endl;
                        break;
                        case 2 :
                        cout<<"washington DC , Dolor"<<endl;
                        break;
                        case 3 :
                        cout<<"Abu dhabi , Dariman"<<endl;
                        break;
                        case 4 :
                        cout<<"Thank you for using our program"<<endl;
                        
                   }
        }while(ch!=4);
        system("PAUSE");
        return 0;
    
    }
