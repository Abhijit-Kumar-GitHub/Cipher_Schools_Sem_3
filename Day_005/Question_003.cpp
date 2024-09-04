/*
Ques-03 Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string.
Assuming that string contains only lowercase.

Sample Input:
Enter a string: cipherschools

Sample Output:
Number of vowels: 4
Number of consonants: 9
*/

#include <iostream>
#include <string>
using namespace std;

void discriminator(const string &a){
    int v = 0;
    int c = 0;
    for(int i = 0; i < a.size(); i++){
        if(isalpha(a[i])){
            if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') v++;
            else c++;
        }
    }
    cout << "Number of vowels: " << v << endl;
    cout << "Number of consonants: " << c << endl;

    return;
}

int main(){
    string a;
    cout << "Enter the string: ";
    getline(cin, a);

    discriminator(a);

    return 0;
}