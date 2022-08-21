#include <iostream>
using namespace std;

int main(void){

    int Days;

    cout << "How many day/s are you late? ";
    cin >> Days;

    if(Days > 0 && Days <= 2){
        cout << "FINE OF PHP 10.00";
    }

    else if(Days > 2 && Days <= 4){
        cout << "FINE OF PHP 15.00";
    }

    else if(Days > 4 && Days <= 5){
        cout << "FINE OF PHP 20.00";
    }

    else{
        cout << "FINE: Equal to the amount of rent\n";
        cout << "CD = PHP50.00 | VHS = PHP35.00";
    }
}