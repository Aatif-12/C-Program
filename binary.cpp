#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector < int > v = {20, 2, 4, 5, 1, 8};
    if(binary_search(v.begin(),v.end(),9))
    cout<< "found.";
    else{
    cout<<"not found.";
    }
    return 0;
}