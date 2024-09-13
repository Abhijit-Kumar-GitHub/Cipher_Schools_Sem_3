/*
Ques 3: Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2) that concatenates two strings and returns the result. Test the function with various input strings.

Sample Input : - str1 = "Hello, "
str2 = "World!"

Sample Output :- "Hello, World!"
*/

#include <bits/stdc++.h>
using namespace std;

string concatenateStrings(const string &, const string &);

int main(){
    string a;
    cout << "Enter the first string: ";
    getline(cin, a);

    string b;
    cout << "Enter the second string: ";
    getline(cin, b);

    cout << "The concatenated string is: " << concatenateStrings(a, b);

    return 0;
}

string concatenateStrings(const string &a, const string &b){
    return a+b;
}