/*
Ques-02: Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
Grade Criteria:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: 0-59

Sample Input:- Enter the score: 85
Sample Output:- Grade: B
*/

#include <iostream>

using namespace std;

char grade(int n){
    if(n > 89) return 'A';
    else if(n > 79) return 'B';
    else if(n > 69) return 'C';
    else if(n > 59) return 'D';
    else return 'F';
}

int main(){
    int n;
    cout << "Enter the score: ";
    cin >> n;

    cout << "Grade: " << grade(n);

    return 0;
}