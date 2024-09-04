/*
Ques-02: Create a Complex class to represent complex numbers and overload the +, -, operators to perform arithmetic operations on complex numbers.

Sample Output:-

Complex Number 1: 3 + 4i
Complex Number 2: 1 + 2i
Sum: 4 + 6i
Difference: 2 + 2i
*/

#include <iostream>
using namespace std;

class CNum{
    private:
        int integer;
        int complex;
    public:
        CNum(int i = 0, int c = 0){
            integer = i;
            complex  = c;
        }

        void display(){
            cout << integer << " + " << complex << "i" << endl;
        }

        CNum operator +(CNum &second){
            return CNum(integer + second.integer, complex + second.complex);
        }

        CNum operator -(CNum &second){
            return CNum(integer - second.integer, complex - second.complex);
        }
};

int main(){
    int a, b, c, d;
    cout << "Enter the real and imaginary part of two complex numbers separated by space: ";
    cin >> a >> b >> c >> d;
    CNum x(a, b);
    cout << "Complex Number 1: ";
    x.display();

    CNum y(c, d);
    cout << "Complex Number 2: ";
    y.display();

    CNum Sum = x + y;
    CNum Difference  = x - y;
    
    cout << "Sum: ";
    Sum.display();

    cout << "Difference: "; 
    Difference.display();
    cout << endl;



    return 0;
}