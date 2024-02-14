#include<iostream>
using namespace std;

int main(){
    int input;
     cout<<"Enter the Number : ";
    cin >> input;
    if(input % 2 == 0){
        cout<<"Entered Number in Even ";
    } else {
        cout<<"Entered Number in Odd ";
    }
    return 0;
}