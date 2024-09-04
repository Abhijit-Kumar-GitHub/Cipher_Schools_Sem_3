/*
Ques-02 Write a C++ program that takes an array as input and prints the sum of odd numbers and the sum of even numbers separately.

Sample Input:
Enter the size of the array: 5
Enter the array: 5 10 15 20 25

Sample Output:
Sum of odd numbers: 45
Sum of even numbers: 30
*/

#include <iostream>
#include <vector>

using namespace std;

void fun(const vector<int>& a){
    int o = 0;
    int e = 0;
    for(int i:a){
        if(i%2) o += i;
        else e += i;
    }
    cout << "Sum of odd numbers: " << o << endl;
    cout << "Sum of even numbers: " << e << endl;

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