#include<iostream>
using namespace std;

void swap(int *xp, int *yp);

int main(){
    int x, y;
    cout<<"Enter the value of x and y: ";
    cin>>x>>y;
    cout<<"Before swapping: "<<x<<" "<<y<<endl;
    swap(&x, &y);
    cout<<"After swapping: "<<x<<" "<<y<<endl;
    return 0;
}

void swap(int *xp, int *yp){
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}