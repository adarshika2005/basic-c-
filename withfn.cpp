#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter a number";
    cin>>n;
    int sum =0;
    for( int i=1;i<=n;i++)
   {
         sum += i;
    }
    cout<<"the sum of the first natural number is : "<<sum <<endl;
    return 0;
}