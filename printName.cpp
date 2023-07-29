#include<iostream>


//Print name n number of times using recursion
using namespace std;

void printName(int i, int n){
    if(i>n){
        return;
    
    }
    cout<<"Feyin";
    cout<<"\n";
printName(i+1,n);

}

// using while loop to printname

void PrintNameLoop(int i, int n){
    while(i<=n){
        cout<<"Feyin";
        cout<<"\n";
        i++;
    }
}

int main(){
    int n;
    cout<<"enter the number of times for printing name";
    cin>>n;
    // printName(1,n);
    PrintNameLoop(1,n);
}