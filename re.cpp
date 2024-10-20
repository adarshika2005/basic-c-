#include<iostream>
using namespace std;
void getcounting(int n){
    if(n<=0)
    return;

getcounting(n-1);
cout<<n<<endl;
}
int main()
{
    int n;
    cout<<" please enter the input"<<endl;
    cin>>n;
    cout<<"counting:"<<endl;
    getcounting(n);
}