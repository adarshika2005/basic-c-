#include<iostream>
using namespace std;
int b=5;//global variable
int main()
{

    //****value di ho****//
   /*int a=9;
    cout<<"the value of a is"<<a<<endl;*/
 
 //******value khud se enter karna ho tab*******//

   // int a;//local variable
   // cout<<"enter the value of a is"<<endl;
  //  cin>>a;
   // cout<<"the value of a is "<<a<<endl;


 //******** a and b value are given********//
   /* int a=9;
     int b=8;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is"<<b<<endl;*/

    
/******local,global,static variable***********/
int a=2;
static int c=8;//static variable
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
 return 0;
}