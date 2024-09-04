/*
Ques-03 Write a C++ program that takes an array as input and prints the number of odd numbers and the number of even numbers in the array.

Sample Input:
Enter the size of the array: 5
Enter the array elements: 5 10 15 20 25

Sample Output:
Number of odd numbers: 3
Number of even numbers: 2
*/

#include <iostream>
#include <vector>

using namespace std;

void fun(const vector<int>& a){
    int o = 0;
    int e = 0;
    for(int i:a){
        if(i%2) o++;
        else e++;
    }
    cout << "Number of odd numbers: " << o << endl;
    cout << "Number of even numbers: " << e << endl;

    return;
}

int main(){
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    cout << "Enter the array separated by space: ";
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    fun(v);

    return 0;
}