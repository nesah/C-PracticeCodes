#include <iostream>
using namespace std;

int main(void){

    double A, B, C, D, Amount;

    cout << "Candy A: ";
    cin >> A;
    A = 35.00 * A;

    cout << "Candy B: ";
    cin >> B;
    B = 45.00 * B;

    cout << "Candy C: ";
    cin >> C;
    C = 56.00 * C;

    cout << "Candy D: ";
    cin >> D;
    D = 57.50 * D;

    Amount = A + B + C +D;
    cout << "Amount: " << Amount << "kg";

return 0;    
}