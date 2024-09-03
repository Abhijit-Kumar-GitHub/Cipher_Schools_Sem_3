/*
Ques-01: Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.

Sample Input:- Enter the first number: 10
Enter the second number: 20
Enter the third number: 15

Sample Output :- The largest number is: 20
*/

#include <iostream>

using namespace std;

void greatest(int a, int b, int c){
    cout << "The largest number is: ";
    if(a > b){
        if(a > c) cout << a;
        else cout << c;
    }
    else{
        if(b > c) cout << b;
        else cout << c;
    }
    return;
}

int main(){
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;

    greatest(a,b,c);

    return 0;
}
