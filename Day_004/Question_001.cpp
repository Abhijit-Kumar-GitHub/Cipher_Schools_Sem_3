/*
Ques:01: Write a C++ program that takes two integers as input and performs the following arithmetic operations:
Addition
Subtraction
Multiplication
Division (ensure that you handle division by zero)
Modulus

Sample Output :-

Enter first integer: 10
Enter second integer: 3
Addition: 13
Subtraction: 7
Multiplication: 30
Division: 3.33333
Modulus: 1
*/

#include <iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter first integer: ";
    cin >> n;
    cout << "Enter second integer: ";
    cin >> m;

    cout << "Addition: " << n+m << "\nSubtraction: " << n-m << "\nMultiplication: " << n*m << "\nDivision: " << (float)n/m << "\nModulus: " << n%m;

    return 0;
}