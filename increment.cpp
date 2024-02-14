#include<iostream>
using namespace std;

int main(){
    int num = 10;
    cout<< "Post Increment : "<< num++ <<endl; //first print 10, then increment to 11
    cout<< "Pre Increment : "<< ++num; //num was 11, then increment to 12 and print 
    return 0;
}