/*
Ques-01 Write a C++ program that takes an array as input and prints the sum of the array.

Sample Input:
Enter the size of the array: 5
Enter the array: 5 10 15 20 25

Sample Output:
Sum of the array: 75
*/

#include <iostream>
#include <vector>

using namespace std;

int SumArray(const vector<int>& v){
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    return sum;
}

int main(){
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    cout << "Enter the array separated by space: ";
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    cout << "Sum of the array: " << SumArray(v) << endl;
    

    return 0;
}