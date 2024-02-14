#include<iostream>
using namespace std;

int main(){
    int number;
     cout<<"Enter The number : ";
    cin>> number;

    if( number !=0){
        if(( number %2) == 0){
            cout<<"The number is Even ";
        }else {
            cout<<"The number is Odd ";
        }
    }
    else {
        cout<<"The number is neither Even and Nor Odd ";
    }
    return 0;
        
}