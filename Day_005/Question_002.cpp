/*
Ques-02 Write a C++ function that takes a string as input and reverses it.

Sample Input:
Enter a string: CipherSchools

Sample Output:
Reversed string: sloohcSrehpiC
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Enter the string you want to reverse: ";
    string a;
    getline(cin, a);

    for(int i = a.size()-1; i >= 0; i--){
        cout << a[i];
    }
}