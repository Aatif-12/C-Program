#include<iostream>
using namespace std;

int main(){
    int a = 50,b = 10;
    
    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int modulus = a % b;

    cout<<" The Addition of " << a << " and " << b <<" is :" << add <<endl;
    cout<<" The Substraction of " << a << " and " << b <<" is :" << sub <<endl;
    cout<<" The Multiplication of " << a <<" and " << b <<" is :" << mul <<endl;
    cout<<" The Division of " << a << " and " << b <<" is :" << div <<endl;
    cout<<" The Modulus of " << a << " and " << b <<" is :" << modulus <<endl;
    return 0;

}