#include<iostream>
using namespace std;

int main(){
    float num1, num2,result;
    char oper;
    cout<<"Enter First Number : ";
    cin>> num1;
    cout<<"Enter Second Number : ";
    cin>> num2;

    cout<<"Choose operators to perform (+,-,*,/) : "<< endl;
    cin>> oper;


    switch (oper){
    case '+':
    result = num1 + num2;
    cout<<"Result : "<< num1 << "+" << num2 << "=" <<result;
        break;

    case '-':
    result = num1 - num2;
    cout<<"Result : "<< num1 << "-" << num2 << "=" <<result;
        break;

    case '*':
    result = num1 * num2;
    cout<<"Result : "<< num1 << "*" << num2 << "=" <<result;
        break;

    case '/':
    result = num1 + num2;
    cout<<"Result : "<< num1 << "/" << num2 << "=" <<result;
        break;
    
    default:
    cout<<"Invalied Operator ";
        break;
    }
    return 0;
}
   