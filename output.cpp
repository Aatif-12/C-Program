#include<iostream>
using namespace std;

int main(){
    int principal, time;
    double rate, si;

    cout<<"Enter the Amount of Principal:";
    cin>> principal;
    cout<<"Enter Rate of Interest:";
    cin>> rate;
    cout<<"Enter Time Period:";
    cin>> time;
    si = principal*rate*time/100;
    cout<<"Simple Interest:"<<si;

}