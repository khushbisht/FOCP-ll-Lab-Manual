#include<iostream>
using namespace std;
/*int sum(string a ,string b){
    cout<<a+b<<":\n";
}
int sum(string a, string b, string c){
        cout<<a+b+c<<":\n";
}*/
int sum(string a, string b, string c=""
, string d=""){
        cout<<a+b+c+d<<":\n";
}
int main(){
    sum("khush", " bisht");
    sum("khush", " bisht", " welcome");
    sum("khush", " bisht", " welcome", " to cpp");
        
    return 0 ;
}