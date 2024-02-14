#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the Number : ";
    cin>> number;

    if( number % 2 == 0)
        goto printeven;
    else
        goto printodd;

printeven :
    cout<<"Even Number";
    return 0;

printodd :
    cout<<"Odd Number";
    return 0;

}