//Write a program in which take roll number and marks from 5 student and show the percentage obtained by the student using stucture.
#include<iostream>
using namespace std;
struct student
{
       int rollno;
       char name[55];
       int phy,chem,bio,math,comp;
       float percentage;
       int total,average;
       
       };
int main(){
    student s;
    cout<<"Enter roll no. :"<<endl;
    cin>>s.rollno;
    cout<<"Enter name :"<<endl;
    cin>>s.name;
    cout<<"Enter marks "<<endl;
    cout<<"physics :"<<endl;
    cin>>s.phy;
    cout<<"Chemistry :"<<endl;
    cin>>s.chem;
     cout<<"Biology :"<<endl;
    cin>>s.bio;
    cout<<"Maths :"<<endl;
    cin>>s.math;
    cout<<"Computer :"<<endl;
    cin>>s.comp;
    cout<<"Roll no. "<<s.rollno<<endl;
    cout<<"NAME :"<<s.name<<endl;
    cout<<"Marks botained "<<endl;
    cout<<"Chemistry "<<s.chem<<endl;
    cout<<"Physics "<<s.phy<<endl;
    cout<<"Biology "<<s.bio<<endl;
    cout<<"Maths "<<s.math<<endl;
    cout<<"computers "<<s.comp<<endl;
    s.total=s.chem+s.phy+s.comp+s.math+s.bio;
    s.average=s.total/5;
    s.percentage=(s.total/500.0)*100;
    cout<<s.average<<endl;
    cout<<s.percentage<<endl;
       system("PAUSE");
       return 0;
    } 

