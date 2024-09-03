/*
Ques-03: Write a C++ program that takes an integer as input from the user and prints the corresponding month of the year using a switch case statement. Assume 1 = January, 2 = February, ..., 12 = December.If integer is not from 1 to 12 then print invalid.

Sample Input:-Enter a number : 5
Sample Output :- The month is: May"
*/

#include <iostream>
#include <string>
using namespace std;

string month(int n){
    switch(n){
        case 1: return "January";
        case 2: return "February";
        case 3: return "March";
        case 4: return "April";
        case 5: return "May";
        case 6: return "June";
        case 7: return "July";
        case 8: return "August";
        case 9: return "September";
        case 10: return "October";
        case 11: return "November";
        case 12: return "December";
        default: return "Invalid";
    }
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "The month is: " << month(n);
}