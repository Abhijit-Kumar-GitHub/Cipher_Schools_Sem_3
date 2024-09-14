/*
Ques 2: Write a program that declares an array of integers and a pointer that points to the first element of the array. Use pointer arithmetic to print all the elements of the array.
*/

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 99,5};
    int* pArr = &arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i= 0; i< size; i++){
        cout << *(pArr + i) << " " ;
    }

    cout << endl;
    return 0;
}