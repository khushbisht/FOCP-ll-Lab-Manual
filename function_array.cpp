#include <iostream>
using namespace std;
void countperformance(int arr[], int size){
    int max,min,avg;
    max = min = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    avg = (max + min) / 2;
    cout << "Max: " << max << ", Min: " << min << ", Avg: " << avg << endl;
}
int main(){
    int arr[5] = {10, 20, 5, 15, 25};
    countperformance(arr, 5);
    return 0;
}