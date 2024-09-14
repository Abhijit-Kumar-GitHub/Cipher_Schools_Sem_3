/*
Ques 3: Create a program that demonstrates the use of a pointer to a pointer. Declare an integer variable, a pointer to the integer, and a pointer to that pointer. Use all three to print the value of the integer.
*/


#include <iostream>

using namespace std;

int main(){
    int n = 9876;
    int* pN = &n;
    int** pPN = &pN;

    cout << "using variable: " << n << endl;

    cout << "using pointer: " << *pN << endl;

    cout << "using pointer to pointer: " << **pPN << endl;

    return 0;
}