#include<iostream>
using namespace std;
int main(){
    cout<<"choose C for celcius and F for fahrenheit: ";
    char ch;
    cin>>ch;
    float temp;
    if(ch=='C' || ch=='c'){
        cout<<"enter temperature in fahrenheit: ";
        cin>>temp;
        float c=(temp-32)*5.0/9;
        cout<<endl<<"temperature in celcius is : "<<c;
    }
    else if(ch=='F' || ch=='f'){
        cout<<"enter temperature in celcius: ";
        cin>>temp;
        float f=(temp*9.0/5)+32;
        cout<<endl<<"temperature in fahrenheit is : "<<f;
    }
    else{
        cout<<"invalid input";
    }
    return 0;
}