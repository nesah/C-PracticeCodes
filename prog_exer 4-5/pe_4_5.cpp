#include <iostream>
using namespace std;

int main(void){

    int N1, N2, M, counter = 0;

    cout << "N1 = ";
    cin >> N1;

    cout << "N2 = ";
    cin >> N2;

    cout << "M = ";
    cin >> M;

    for(int i = N1; i <= N2; i++){
        if(i%M == 0){
            cout << i <<" ";
            counter++;
        }
    }

    cout << "\nThere are " << counter << " NUMBERS divisible by " << M;
}