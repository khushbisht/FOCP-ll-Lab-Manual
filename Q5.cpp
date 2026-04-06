#include<iostream>
using namespace std;                
int main(){
    int a, b, temp;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    // Swapping using a temporary variable
    temp = a;
    a = b;
    b = temp;

    cout<<endl<<"After swapping (using temporary variable): "<<endl;
    cout<<"First number: "<<a<<endl;
    cout<<"Second number: "<<b<<endl;

    // Swapping back using arithmetic operations
    a = a + b;
    b = a - b;
    a = a - b;

    cout<<endl<<"After swapping back (using arithmetic operations): "<<endl;
    cout<<"First number: "<<a<<endl;
    cout<<"Second number: "<<b<<endl;

    // Swapping again using multiplication and division
    a = a * b;
    b = a / b;
    a = a / b;
    cout<<endl<<"After swapping again (using multiplication and division): "<<endl;
    cout<<"First number: "<<a<<endl;

    // Swapping again using XOR bitwise operation
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout<<endl<<"After swapping again (using XOR bitwise operation): "<<endl;
    cout<<"First number: "<<a<<endl;
    cout<<"Second number: "<<b<<endl;

    return 0;
}