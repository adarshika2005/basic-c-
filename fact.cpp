#include<iostream>
using namespace std;
int getfactorial(int n){
    if( n<=1)
    return 1;
 return n*getfactorial(n-1);
}
int main(){
   
    int n;
    cout<<"please enter input"<<endl;
    cin>>n;
    cout<<"value of "<<n<<"! is"<<getfactorial(n)<<endl;
  
}