#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the Number : ";
    cin>> number;
    if( number > 0){
        cout<<"You Enter Positive Number\n ";
    }
    else if ( number < 0){
        cout<<"You Enter Negative Number\n ";
    }
    else{
        cout<<"You Enter O\n";
    }
    return 0;
}