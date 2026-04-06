#include <iostream>
using namespace std;
int main() {
    int n=5;
    std::string s="ABCDE";
    for(int i=0;i<n;i++){
        for(int k=0;k<=i;k++){
            cout<<s[k];
        }
        cout<<endl;
    }
    return 0;
}