#include<iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cout<<"enter dimensions of first matrix (rows and columns): ";
    cin>>m>>n;
    cout<<"enter dimensions of second matrix (rows and columns): ";
    cin>>p>>q;
    
    if(n!=p){
        cout<<"multiplication not possible";
        return 0;
    }
    int a[m][n],b[p][q],c[m][q];

    cout<<"enter elements of first matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter elements of second matrix: "<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j]; //matrix multiplication logic
            }
        }
    }
    cout<<"resultant matrix is: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}