
#include <iostream>

using namespace std;

int main(){
    int n = 9;
    int* pN = &n;

    cout << "using variable: " << n << endl;

    cout << "using pointer: " << *pN << endl;

    return 0;
}