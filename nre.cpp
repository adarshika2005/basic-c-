#include<iostream>
using namespace std;
void getcounting(int n){
    if(n<=0)
    return;
cout<<n<<endl;
getcounting(n-1);
}
int main()
{
    int n;
    cout<<"enter the input"<<endl;
    cin>>n;
    cout<<"counting : "<<endl;
    getcounting(n);
}