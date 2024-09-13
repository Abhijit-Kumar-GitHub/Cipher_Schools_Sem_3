/*
Ques 1: Write a function int stringLength(const std::string &str) that returns the length of a given string. Test your function with various strings in the main() function.

Sample Input:- str1 = "Hello, World!"
Output:- 13
*/

#include <iostream>
#include <string>

using namespace std;

int stringLength(const string &);

int main(){
    string a;
    cout << "Enter the string to find its length: ";
    getline(cin, a);

    cout << stringLength(a);

    return 0;
}

int stringLength(const string &a){
    int l = 0;
    while(a[l] != '\0'){
        l++;
    }
    return l;
}