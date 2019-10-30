//write a program to sort an array
#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int size,i,j,temp;
    cout<<"Enter the size of array :"<<endl;
    cin>>size;
    cout<<"Enter thev elements of array"<<endl;
    for(i=0;i<size;i++)
    {
                       cin>>arr[i];
                       }
                       for(i=0;i<size;i++){
                                           for(j=i+1;j<size;j++){
                                                                 if(arr[j]<arr[i])
                                                                 {
                                                                                  temp=arr[i];
                                                                                  arr[i]=arr[j];
                                                                                  arr[j]=temp;
                                                                                  }
                                                                 }
                                           }
                                           cout<<"Elements of array is sorted :"<<endl;
                                           for(i=0;i<size;i++){
                                                               cout<<arr[i]<<endl;
                                                               }
                                                               system("PAUSE");
                                                               return 0;
    }
