#include <iostream>
using namespace std;

int main(void){

    double Hours;

    cout << "Input hours: ";
    cin >> Hours;

    int Min = Hours * 60;

    cout << Hours << " hours is equal to " << Min <<" minutes";

return 0;
}