#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the num"<<endl;
    cin>>num;
    if(num<0){
        cout<<"the num is negative"<<endl;
    }
    else if(num>0){
        cout<<"the num is positive"<<endl;
    }
    
    else
    {
        cout<<"the num is zero"<<endl;
      
    }
    return 0;
}