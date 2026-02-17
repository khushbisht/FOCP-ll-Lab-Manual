#include<iostream>
using namespace std;
int sum(int a ,int b){
    cout<<"sum of two subject marks is:\n";
    return a+b;
}
int sum(int a, int b, int c){
     cout<<"sum of three subject marks is:\n";
    return a+b+c;
}
int sum(int a, int b, int c, int d){
     cout<<"sum of four subject marks is:\n";
    return a+b+c+d;
}
int main(){
    cout<<sum(10,20,30,40);
    return 0 ;
}