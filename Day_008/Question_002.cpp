/*
Ques 2: Implement a function int countCharacter(const std::string &str, char ch) that counts the number of occurrences of a specific character in a given string. Test the function with different strings and characters.

Sample Input:- String ="Hello, World!"
character=’l’
Output:- 3
*/

#include <iostream>
#include <string>

using namespace std;

int countChar(const string &, char);

int main(){
    string a;
    cout << "Enter the string to find its length: ";
    getline(cin, a);

    char b;
    cout << "Enter a character to finds how many times it occurred: ";
    cin >> b;

    cout << countChar(a, b);

    return 0;
}

int countChar(const string &a, char b){
    int l = 0;
    int c = 0;
    while(a[l] != '\0'){
        if(a[l] == b) c++;
        l++;
    }
    return c;
}