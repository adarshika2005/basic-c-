#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter two number";
    cin>>num1>>num2;
    if(num1>num2){
    cout<<"the greatest is number is:"<<num1<<endl;
    }
     else if(num2>num1)
     {
        cout<<"the greastest number is "<<num2<<endl;

    }
    else {
        cout<<"both are equal "<<endl;
    }
    return 0; 

}