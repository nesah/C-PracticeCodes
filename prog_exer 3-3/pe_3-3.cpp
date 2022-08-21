#include <iostream>
using namespace std;

int main(void){

    double a, b, c, qoutient, sum, difference, product, sum_squares;

    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input c: ";
    cin >> c;

    qoutient = a/b/c;
    sum = a + b + c; 
    difference = a - b - c; 
    product = a * b * c;
    sum_squares = (a*2) + (b*2) + (c*2);

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Sum of Squares: " << sum_squares << endl;

return 0;    
}