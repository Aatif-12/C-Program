#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {7,5,2,6,3,9,8,-4};
    int size = 8;
    for (int i = 0; i < size; i++)
    {
        if (arr [i] < 0)
        {
            cout<<"Array contains Negative Value. ";
            break;
        }

    }   
}