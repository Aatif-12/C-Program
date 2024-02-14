#include<iostream>
using namespace std;

int main()
{

    int arr[] = {4,5,6,-5,7,8,-3,0};
    int size = 8;

    for(int i = 0; i < size ;i++)
    {
        if( arr[i] < 0)
        {
            continue;
        }

        cout<<arr[i]<<" "; 

    }
}