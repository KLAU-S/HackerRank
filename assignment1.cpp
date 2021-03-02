/* Problem: Write a program to read a matrix of size m*n from the keyboard and display the same using function. */


#include<iostream>
using namespace std;

int i,j,r,c;
int matrix[100][100];
void inpmatrix(int r,int c){
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
}
void outmatrix(int r,int c){
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<" \n";
    }
}
int main(){
    cout<<"Enter the size of matrix. \n";
    cout<<"Enter the size of row. \n";
    cin>>r;
    cout<<"Enter the size of colom. \n";
    cin>>c;
    cout<<"Enter the data. ";
    inpmatrix(r,c);
    cout<<"Now data is displayed below. \n";
    outmatrix(r,c);
    return 0;
}


