/*#include<iostream>
using namespace std;
int main()
{
    int a=4.34;
    float b= int(a);
    
    cout<<"the value convertfloat to int  is :"<<b<<endl;

  
    return 0;
}*/



/*#include <iostream>

int main() {
    float a = 3.14;
    int b = static_cast<int>(a); // Explicit cast

    std::cout << "Float value: " << a << std::endl;
    std::cout << "Casted to int: " << b << std::endl;
    return 0;
}*/


/*#include<iostream>
using namespace std;
int main()
{
    char word ='a';
    int asciivalue = static_cast<int>(word);
    cout<<"character:"<<word<<endl;
    cout<<"ascii value :"<<asciivalue<<endl;
    return 0;
    
    }*/


#include<iostream>
int main() {
    char letter = 'A';
    int asciiValue = static_cast<int>(letter);

    std::cout << "Character: " << letter << std::endl;
    std::cout << "ASCII Value: " << asciiValue << std::endl;
    return 0;
}