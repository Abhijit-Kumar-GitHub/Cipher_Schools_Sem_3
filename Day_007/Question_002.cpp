/*
Ques-02 Write C++ program that take array from the user and sort the array using insertion sort algorithm.

Input:
N = 5
arr[] = {4, 1, 3, 9, 7}

Output:
1 3 4 7 9
*/


#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void bubbleSort(vector<int>& v){
    for(int i = 0; i < v.size()-1; i++){
        for(int j = 0; j < v.size() - i - 1; j++){
            if(v[j] > v[j+1]) swap(v[j], v[j+1]);
        }
    }
    return;
}

void insertSort(vector<int>& v){
    for(int i = 1; i < v.size(); i++){
        int key = v[i];
        int j = i - 1;
        while(j >= 0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}

void printVector(vector<int>& v){
    for(int i = 0; i< v.size() ;i++) cout << v[i] << " ";
    return;
}

int main(){
    cout << "Enter the size of the array: ";
    int n;
    cin >> n;

    cout << "Enter the array separated by spaces: ";
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    // bubbleSort(v);
    insertSort(v);
    printVector(v);

    return 0;
}




