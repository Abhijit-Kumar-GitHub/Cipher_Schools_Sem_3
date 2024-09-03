/*
Ques - 01: Write a C++ program that takes an integer N as input from the user and calculates the sum of the first N natural numbers using a for loop.

Sample Input:- Enter a number: 5
Sample Output:- The sum of the first 5 natural numbers is: 15"
*/

#include <iostream>
using namespace std;

double fun(int n){
    return (double)n * (double)(n + 1) / 2.0;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The sum of first 5 natural numbers is: " << fun(n);

    return 0;
}