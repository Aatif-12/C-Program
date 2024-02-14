#include<iostream>
using namespace std;
int main() {
    int a;
    cin>>a;

    for(int i=2;i<a;i++){
        if(a%i==0){
        cout<<"It is not a Prime."<<endl;
        break;
        }
        else{
        cout<<"It is a Prime.";
        break;
        }
    }
    
    return 0;
}