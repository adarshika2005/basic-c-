#include<iostream>
using namespace std;
int main()
{
    float pi;
    int area;
    int radius;
    cout<<"enter the pi "<<endl;
    cin>>pi;
    cout<<"enter the radius "<<endl;
    cin>>radius;
    area = pi *radius*radius;
    cout<<"area of circle "<<area<<endl;
    return 0;
}