#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int basic;
    cin>>basic;
    char ch;
    cin>> ch;
    int totalsalary, allow;
    float hra,da,pf;
    hra = basic*0.2;
    da = basic*0.5;
    pf = basic*0.11;

    if(ch == 'A'){
        allow =1700;
        totalsalary=(basic + hra + da + allow - pf)+0.5;
        cout<<totalsalary;
    }else if(ch == 'B'){
         allow =1500;
        totalsalary=(basic + hra + da + allow - pf)+0.5;
        cout<<totalsalary;
    }else{
        allow =1300;
        totalsalary=(basic + hra + da + allow - pf)+0.5;
        cout<<totalsalary;
    }

    return 0;
}