#include<iostream>
using namespace std;
int main(){
    int item_no, quantity;
    float unit_price;
    cout<<"Enter item number: ";
    cin>>item_no;
    cout<<"Enter quantity: ";
    cin>>quantity;
    cout<<"Enter unit price: ";
    cin>>unit_price;

    float total_amount = quantity * unit_price;
    float discount = total_amount * 0.20;
    float final_amount = total_amount - discount;

    cout<<endl<<"Total amount after 20% discount is: "<<final_amount;
    return 0;
}