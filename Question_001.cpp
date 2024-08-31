/*
Day - 01 Questions - Week-01 (August 14th, 2024)
Ques - 01 Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.

Sample Input :- Enter the first string: Hello
Enter the second string: World

Sample Output:- Concatenated string: HelloWorld
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1;
    string s2;
    
    cout << "Enter the first string: ";
    getline(cin, s1);                                           //  getline rather than cin to cater to strings having spaces.
    
    cout << "Enter the second string: ";
    getline(cin, s2);
    
    cout << "Concatenated String: " << s1 + s2 << endl;

    return 0;
}