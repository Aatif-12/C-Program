#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int a,b,c;
    cin>>a>>b>>c;
    
    
    int Max=max(a,max(b,c));
    cout<<Max;

    return 0;
}